

#pragma once

#include "CoreMinimal.h"
#include "CPPAbstract.h"
#include "CPPAbstractChild.generated.h"

/**
 * 
 */
UCLASS()
class UQ5_API ACPPAbstractChild : public ACPPAbstract
{
	GENERATED_BODY()
public:
	void Greeting(FString message);
};
