#pragma once

#include "CoreMinimal.h"

class FPokePalRequestService
{
public:
	FPokePalRequestService();
	~FPokePalRequestService();

	bool HasOpenAIApiKey() const;

private:
	FString GetOpenAIApiKey() const;

	void BuildRequestPreview() const;

	FString BuildRequestBodyPreview() const;
};