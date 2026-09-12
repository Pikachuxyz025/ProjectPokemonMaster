#include "PokePal/Services/PokePalRequestService.h"
#include "HAL/PlatformMisc.h"

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