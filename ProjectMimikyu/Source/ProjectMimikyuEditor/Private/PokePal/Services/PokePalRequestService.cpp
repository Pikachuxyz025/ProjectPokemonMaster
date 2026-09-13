#include "PokePal/Services/PokePalRequestService.h"
#include "HAL/PlatformMisc.h"
#include "Interfaces/IHttpResponse.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokePalRequestService, Log, All);

namespace PokePalRequest
{
	static const TCHAR* OpenAIApiKeyEnvironmentVariable = TEXT("OPENAI_API_KEY");
	static const TCHAR* OpenAIResponsesURL = TEXT("https://api.openai.com/v1/responses");
}

FPokePalRequestService::FPokePalRequestService()
{
	UE_LOG(
		LogPokePalRequestService,
		Log,
		TEXT("PokéPal Request Service created.")
	);

	UE_LOG(
		LogPokePalRequestService,
		Log,
		TEXT("OpenAI API credential available: %s"),
		HasOpenAIApiKey() ? TEXT("Yes") : TEXT("No")
	);
}

FPokePalRequestService::~FPokePalRequestService()
{
	if (ActiveRequest.IsValid())
	{
		ActiveRequest->OnProcessRequestComplete().Unbind();
		ActiveRequest->CancelRequest();
		ActiveRequest.Reset();
	}

	UE_LOG(LogPokePalRequestService,Log,TEXT("PokéPal Request Service destroyed."));
}

bool FPokePalRequestService::HasOpenAIApiKey() const
{
	return !GetOpenAIApiKey().IsEmpty();
}

FString FPokePalRequestService::GetOpenAIApiKey() const
{
	return FPlatformMisc::GetEnvironmentVariable(PokePalRequest::OpenAIApiKeyEnvironmentVariable);
}

void FPokePalRequestService::SendHelloRequest()
{
	if (!HasOpenAIApiKey())
	{
		UE_LOG(
			LogPokePalRequestService,
			Warning,
			TEXT("Cannot send request: OpenAI API credential is unavailable.")
		);
		return;
	}

	if (ActiveRequest.IsValid())
	{
		UE_LOG(
			LogPokePalRequestService,
			Warning,
			TEXT("Cannot send request: Another request is already in progress.")
		);
		return;
	}

	FHttpRequestPtr Request = FHttpModule::Get().CreateRequest();

	Request->SetURL(PokePalRequest::OpenAIResponsesURL);

	Request->SetVerb(TEXT("POST"));

	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *GetOpenAIApiKey()));

	const FString RequestBody = BuildRequestBodyPreview();

	Request->SetContentAsString(RequestBody);

	Request->OnProcessRequestComplete().BindRaw(this, &FPokePalRequestService::HandleRequestComplete);

	ActiveRequest = Request;
	const bool bStarted = Request->ProcessRequest();

	if (!bStarted)
	{
		Request->OnProcessRequestComplete().Unbind();
		ActiveRequest.Reset();

		UE_LOG(LogPokePalRequestService, Error, TEXT("PokéPal HTTP request failed to start."));

		return;
	}

	UE_LOG(LogPokePalRequestService, Log, TEXT("PokéPal HTTP request started."));
}

FString FPokePalRequestService::BuildRequestBodyPreview() const
{
	TSharedRef<FJsonObject> RootObject = MakeShared<FJsonObject>();

	RootObject->SetStringField(TEXT("model"), TEXT("gpt-5.6-luna"));

	RootObject->SetStringField(TEXT("input"), TEXT("Reply with exactly: Hello from OpenAI to PokePal."));

	RootObject->SetBoolField(TEXT("store"), false);

	FString JsonString;

	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);

	FJsonSerializer::Serialize(RootObject, Writer);

	return JsonString;
}

void FPokePalRequestService::HandleRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	ActiveRequest.Reset();

	if (!bConnectedSuccessfully)
	{
		UE_LOG(LogPokePalRequestService, Error, TEXT("PokéPal HTTP transport failed."));
		return;
	}

	if (!Response.IsValid())
	{
		UE_LOG(LogPokePalRequestService, Error, TEXT("PokéPal request completed without a valid HTTP response."));
		return;
	}

	const int32 StatusCode = Response->GetResponseCode();

	const FString ResponseBody = Response->GetContentAsString();

	UE_LOG(LogPokePalRequestService, Log, TEXT("PokéPal request completed with status code %d. Response: %s"), StatusCode, *ResponseBody);

	if (StatusCode < 200 || StatusCode >= 300)
	{
		UE_LOG(LogPokePalRequestService, Error, TEXT("OpenAI returned an HTTP error."));

		UE_LOG(LogPokePalRequestService, Error, TEXT("Response body: %s"), *ResponseBody);
	}

	UE_LOG(LogPokePalRequestService, Log, TEXT("OpenAI response received successfully."));

	UE_LOG(LogPokePalRequestService, Log, TEXT("Response body: %s"), *ResponseBody);
}
