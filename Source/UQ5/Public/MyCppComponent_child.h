

#pragma once

#include "CoreMinimal.h"
#include "CppComponent.h"
#include "MyCppComponent_child.generated.h"

/**
 * 
 */
UCLASS()
class UQ5_API AMyCppComponent_child : public ACppComponent
{
	GENERATED_BODY()
public:
	AMyCppComponent_child();

	int VarChiledNum = 100;

	void SetPoint(int myPoint);
};
