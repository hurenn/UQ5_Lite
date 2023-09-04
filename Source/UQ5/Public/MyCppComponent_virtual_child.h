

#pragma once

#include "CoreMinimal.h"
#include "CppComponent.h"
#include "MyCppComponent_virtual_child.generated.h"

/**
 * 
 */
UCLASS()
class UQ5_API AMyCppComponent_virtual_child : public ACppComponent
{
	GENERATED_BODY()
	
public:
	virtual void SetPoint(int myPoint);
};
