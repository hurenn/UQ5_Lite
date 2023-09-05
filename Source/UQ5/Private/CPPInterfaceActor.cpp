


#include "CPPInterfaceActor.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACPPInterfaceActor::ACPPInterfaceActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPInterfaceActor::BeginPlay()
{
	Super::BeginPlay();

	PrintHello();

	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Add(1+2)=%d"), Add(1, 2)), true, true, FColor::Cyan, 5.f, TEXT("None"));
}

void ACPPInterfaceActor::PrintHello() {
	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Good Night World!")), true, true, FColor::Blue, 6.f, TEXT("None"));
}

// Called every frame
void ACPPInterfaceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

