// Fill out your copyright notice in the Description page of Project Settings.


#include "StadiaLatencyNodes.h"
#if PLATFORM_STADIA
#include <chrono>
#include "ggp/ggp.h"
#endif

float UStadiaLatencyNodes::GetStadiaLatency()
{
#if PLATFORM_STADIA
	std::chrono::microseconds latency = ggp::GetNetworkDelayForInput(ggp::GetPrimaryPlayerId(), 0);
	float lag = latency.count()/1000;
	return lag;
#endif
	return -1.0;
}