// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include <VkUtil.h>

//#include "vulkan_ggp.h"


#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StadiaLatencyNodes.generated.h"

/**
 * 
 */
UCLASS()
class STADIAMQP_API UStadiaLatencyNodes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "GetStadiaLatency"))
		static float GetStadiaLatency();

};
