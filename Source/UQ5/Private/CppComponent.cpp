


#include "CppComponent.h"

// Sets default values
ACppComponent::ACppComponent()
{
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

// Called when the game starts or when spawned
void ACppComponent::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACppComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

