#pragma once

#include "CoreMinimal.h"
#include "HttpFwd.h"

class FPokePalRequestService
{
public:
	FPokePalRequestService();
	~FPokePalRequestService();

	bool HasOpenAIApiKey() const;

	void SendHelloRequest();

private:
	FString GetOpenAIApiKey() const;
	FString BuildRequestBodyPreview() const;

	void HandleRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);

	FHttpRequestPtr ActiveRequest;
};