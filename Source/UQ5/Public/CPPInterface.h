

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
	// �����Ɩ߂�l���Ȃ������o�ϐ�
	virtual void PrintHello();
	// �����Ɩ߂�l�����郁���o�ϐ�
	virtual int Add(int A, int B);
};
