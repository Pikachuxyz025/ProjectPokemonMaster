#include "PokePal/Services/PokePalRequestService.h"

DEFINE_LOG_CATEGORY_STATIC(LogPokePalRequestService, Log, All);

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