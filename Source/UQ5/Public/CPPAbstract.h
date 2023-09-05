

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPAbstract.generated.h"

UCLASS(Abstract)
class UQ5_API ACPPAbstract : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPAbstract();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = Default)
		FString GreetingMessage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Greeting(FString message) PURE_VIRTUAL(ACPPAbstract::Greeting, );
};
