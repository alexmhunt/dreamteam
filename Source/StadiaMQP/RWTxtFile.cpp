// Fill out your copyright notice in the Description page of Project Settings.
#include "RWTxtFile.h"

//#if PLATFORM_STADIA
//#include "ggp/ggp.h"
//#endif

bool URWTxtFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool URWTxtFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
/*#if PLATFORM_STADIA
	ggp::String dir = ggp::GetGameDataDirectory();
	FString Sdir = FString(dir.c_str());
	UE_LOG(LogTemp, Warning, TEXT("PROJECT DIRECTORY %s"), *(Sdir + FileNameB));
	return FFileHelper::SaveStringToFile(SaveTextB, *(Sdir + FileNameB));
#endif
*/

	UE_LOG(LogTemp, Warning, TEXT("PROJECT DIRECTORY %s"), *(FPaths::ProjectDir()+FileNameB));
	UE_LOG(LogTemp, Warning, TEXT("PROJECT FILE PATH %s"), *FPaths::GetProjectFilePath());
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}
