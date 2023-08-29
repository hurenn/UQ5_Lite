

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPActorBase.generated.h"

UCLASS()
class UQ5_API ACPPActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
