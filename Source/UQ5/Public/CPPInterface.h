

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CPPInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCPPInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UQ5_API ICPPInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// 引数と戻り値がないメンバ変数
	virtual void PrintHello();
	// 引数と戻り値があるメンバ変数
	virtual int Add(int A, int B);
};
