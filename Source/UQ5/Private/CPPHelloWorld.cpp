


#include "CPPHelloWorld.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
ACPPHelloWorld::ACPPHelloWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPHelloWorld::BeginPlay()
{
	Super::BeginPlay();
	
	FString Message = "Hello New World!";

	// PrintString関数を呼び出す
	UKismetSystemLibrary::PrintString(this, Message, true, true, FColor::Cyan, 2.f, TEXT("None"));

	// OutputLogに文字列を出力するマクロ
	UE_LOG(LogTemp,Display, TEXT("Display Message"));
	UE_LOG(LogTemp, Warning, TEXT("Warning Message"));
	UE_LOG(LogTemp, Error, TEXT("Error Message"));

	// Viewportの左上に文字列を出力する関数
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White, "C++ Goodnight World", true, FVector2D(2.0f, 2.0f));

	int calA = 7;
	int calB = 3;

	// ノードを利用する計算
	int result = UKismetMathLibrary::Add_IntInt(calA, calB);
	FString resultStr = UKismetStringLibrary::Conv_IntToString(result);
	UKismetSystemLibrary::PrintString(
		this, resultStr, true, true, FColor::Red, 2.0f, TEXT("None")
	);
}

// Called every frame
void ACPPHelloWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

