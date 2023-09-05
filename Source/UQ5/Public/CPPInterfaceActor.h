

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPInterface.h"
#include "CPPInterfaceActor.generated.h"

UCLASS()
class UQ5_API ACPPInterfaceActor : public AActor, public ICPPInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPInterfaceActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PrintHello() override;

};
