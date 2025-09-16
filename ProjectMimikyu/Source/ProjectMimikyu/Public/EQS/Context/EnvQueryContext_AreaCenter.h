// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvQueryContext_AreaCenter.generated.h"


// Provides a single world-space location all generators/text can reference

UCLASS()
class PROJECTMIMIKYU_API UEnvQueryContext_AreaCenter : public UEnvQueryContext
{
	GENERATED_BODY()
	
public:
    
	virtual void ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const override;
	static int32 GetIntNamedParam(const FEnvQueryInstance& QueryInstance, FName ParamName, int32 DefaultValue = -1);
	//UPROPERTY(EditAnywhere, Category = "Context")
	//bool bUseBlackboardKeyIfAvailable = false;

	//UPROPERTY(EditAnywhere, Category = "Context", meta = (EditCondition = "bUseBlackboardKeyIfAvailable"))
	//FBlackboardKeySelector BlackboardKey;

	//UPROPERTY(EditAnywhere, Category = "Context")
	//bool bUseQuerierIfUnset = false;


};
