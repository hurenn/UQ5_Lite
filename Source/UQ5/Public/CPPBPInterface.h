

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CPPBPInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UCPPBPInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UQ5_API ICPPBPInterface
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//// BlueprintNativeEvent‚ÍBlueprint‚ÆC++‚ÅŽÀ‘•‰Â”\
	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "InterfaceTest")
	//	void IPrintHello();

	//UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "InterfaceTest")
	//	int IAdd(int A, int B);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "InterfaceTest")
		void BlueprintOnlyEvent();
};
