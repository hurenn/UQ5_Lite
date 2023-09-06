


#include "CPPAbstractBPParent.h"

// Sets default values
ACPPAbstractBPParent::ACPPAbstractBPParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPAbstractBPParent::BeginPlay()
{
	Super::BeginPlay();

	// ˆ¥ŽA‚·‚é
	Greeting();	
}

void ACPPAbstractBPParent::Greeting_Implementation()
{

}

// Called every frame
void ACPPAbstractBPParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

