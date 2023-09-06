

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPAbstractBPParent.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract)
class UQ5_API ACPPAbstractBPParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPAbstractBPParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// îhê∂ÉNÉâÉXÇ≈ílÇê›íËÇ∑ÇÈ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Default)
		FString GreetingMessage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Greeting();
};
