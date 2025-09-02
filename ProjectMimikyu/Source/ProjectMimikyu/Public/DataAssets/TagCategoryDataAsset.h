// Fill out your copyright notice in the Description page of Project Settings.
using namespace UP;
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Characters/CharacterTypes.h"
#include "TagCategoryDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMIMIKYU_API UTagCategoryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FTagCategoryMap> Categories;

    UFUNCTION(BlueprintCallable, Category = "Tag Category")
    const FTagCategoryMap FindCategoryForTag(const FGameplayTag& Tag) const
    {
        for (const FTagCategoryMap& Category : Categories)
        {
            if (Category.Tags.Contains(Tag))
            {
                return Category;
            }
        }
        return FTagCategoryMap();
    }
};
