// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MMC/MMC_StatCalculation.h"

int32 UMMC_StatCalculation::CalculateOtherStats(int CurrentLevel, int BaseStat, float Nature, float ELB) const
{
	float X = ((float)CurrentLevel / 50.f) + 1;
	float Y = (X * (float)BaseStat) / 1.5;
	return (Y * Nature) + ELB;
}
