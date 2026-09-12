#include "PokePal/Services/PokePalRequestService.h"
#include "HAL/PlatformMisc.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokePalRequestService, Log, All);

namespace PokePalRequest
{
	static const TCHAR* OpenAIApiKeyEnvironmentVariable = TEXT("OPENAI_API_KEY");
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

	BuildRequestPreview();
}

FPokePalRequestService::~FPokePalRequestService()
{
	UE_LOG(
		LogPokePalRequestService,
		Log,
		TEXT("PokéPal Request Service destroyed.")
	);
}

bool FPokePalRequestService::HasOpenAIApiKey() const
{
	return !GetOpenAIApiKey().IsEmpty();
}

FString FPokePalRequestService::GetOpenAIApiKey() const
{
	return FPlatformMisc::GetEnvironmentVariable(PokePalRequest::OpenAIApiKeyEnvironmentVariable);
}

void FPokePalRequestService::BuildRequestPreview() const
{
	if (!HasOpenAIApiKey())
	{
		UE_LOG(
			LogPokePalRequestService,
			Warning,
			TEXT("Cannot build request preview: API credential is unavailable.")
		);

		return;
	}

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();

	Request->SetVerb(TEXT("POST"));

	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *GetOpenAIApiKey()));

	const FString RequestBody = BuildRequestBodyPreview();

	Request->SetContentAsString(RequestBody);

	UE_LOG(LogPokePalRequestService, Log, TEXT("HTTP request preview built."));

	UE_LOG(LogPokePalRequestService, Log, TEXT("Verb: %s"), *Request->GetVerb());

	UE_LOG(LogPokePalRequestService, Log, TEXT("Content-Type: %s"), *Request->GetHeader(TEXT("Content-Type")));

	UE_LOG(LogPokePalRequestService, Log, TEXT("Authorization header configured: %s"), Request->GetHeader(TEXT("Authorization")).IsEmpty() ? TEXT("No") : TEXT("Yes"));

	UE_LOG(LogPokePalRequestService, Log, TEXT("Body size: %d characters"), Request->GetContentLength());

	UE_LOG(LogPokePalRequestService, Log, TEXT("Request body preview: %s"), *RequestBody);
}

FString FPokePalRequestService::BuildRequestBodyPreview() const
{
	TSharedRef<FJsonObject> RootObject = MakeShared<FJsonObject>();

	RootObject->SetStringField(TEXT("message"), TEXT("Hello from PokéPal!"));

	RootObject->SetStringField(TEXT("phase"), TEXT("Hello AI!"));

	RootObject->SetBoolField(TEXT("read_only"), true);

	FString JsonString;

	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);

	FJsonSerializer::Serialize(RootObject, Writer);

	return JsonString;
}
