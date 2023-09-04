


#include "CppComponent.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACppComponent::ACppComponent()
{
	hp = 100;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

	// SceneComponentをルートに設定
	RootComponent = DefaultSceneRoot;

	// StaticMeshComponent作成
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	// StaticMeshをロードしてコンポーネントに設定
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(NULL, TEXT("/Game/CPP_BP/Meshes/SM_SampleCube"), NULL, LOAD_None, NULL);
	StaticMesh->SetStaticMesh(Mesh);

	// StaticMeshComponentをルートにアタッチ
	StaticMesh->SetupAttachment(RootComponent);

	// ArrowComponentを作成
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	
	// Arrowの位置を設定
	Arrow->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

	// ArrowComponentをStaticMeshにアタッチ
	Arrow->SetupAttachment(StaticMesh);

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));

	PointLight->SetRelativeLocation(FVector(130.0f, 0.0f, 0.0f));

	PointLight->SetupAttachment(StaticMesh);
}

void ACppComponent::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	UKismetSystemLibrary::PrintString(this, TEXT("EndPlay"), true, true, FColor::Cyan, 2.f);
}

// Called when the game starts or when spawned
void ACppComponent::BeginPlay()
{
	// Note:継承されたとき、動的に呼ばれなくても実行される

	Super::BeginPlay();

	// hp出力
	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("%d"), hp), true, true, FColor::Cyan, 2.f, TEXT("None"));
}

// Called every frame
void ACppComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACppComponent::CallParentFunc() {
	FString name = UKismetSystemLibrary::GetDisplayName(this);
	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("%s : CallParentFunc %d"), *name, VarParentNum), true, true, FColor::Cyan, 2.f, TEXT("None"));
}