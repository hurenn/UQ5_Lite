

#pragma once

#include "Components/ArrowComponent.h"
#include "Components/PointLightComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppComponent.generated.h"

UCLASS()
class UQ5_API ACppComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppComponent();

	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> Arrow;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UPointLightComponent> PointLight;

	UPROPERTY(EditAnywhere, Category = "Point Light")
		bool bIsVisible = false;
	UPROPERTY(EditAnywhere, Category = "Point Light")
		float Intensity = 5000.0f;
	UPROPERTY(EditAnywhere, Category = "Point Light")
		FLinearColor LightColor = FLinearColor::White;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	int point;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere)
	TObjectPtr<USceneComponent> DefaultSceneRoot;

	UFUNCTION(BlueprintCallable, Category=CPP_And_Blueprint)
	void CallParentFunc();

	// アクセサ
	void SetPoint(int myPoint);
	int GetPoint();

private:
	const float Duration = 10.0f;
	const FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0);
	int hp = 0;

	int VarParentNum = 10;
};
