

#pragma once

#include "CoreMinimal.h"
#include "CPPAbstractBPParent.h"
#include "CPP_MyCPPAbstractBPChild.generated.h"

/**
 * 
 */
UCLASS()
class UQ5_API ACPP_MyCPPAbstractBPChild : public ACPPAbstractBPParent
{
	GENERATED_BODY()
	
public:
	virtual void Greeting_Implementation() override;
};
