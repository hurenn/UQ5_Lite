


#include "CPPAbstract.h"

// Sets default values
ACPPAbstract::ACPPAbstract()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPAbstract::BeginPlay()
{
	Super::BeginPlay();
	
	Greeting(GreetingMessage);
}

// Called every frame
void ACPPAbstract::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}