


#include "CppComponent.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACppComponent::ACppComponent()
{
	hp = 100;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

	// SceneComponent�����[�g�ɐݒ�
	RootComponent = DefaultSceneRoot;

	// StaticMeshComponent�쐬
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	// StaticMesh�����[�h���ăR���|�[�l���g�ɐݒ�
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(NULL, TEXT("/Game/CPP_BP/Meshes/SM_SampleCube"), NULL, LOAD_None, NULL);
	StaticMesh->SetStaticMesh(Mesh);

	// StaticMeshComponent�����[�g�ɃA�^�b�`
	StaticMesh->SetupAttachment(RootComponent);

	// ArrowComponent���쐬
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	
	// Arrow�̈ʒu��ݒ�
	Arrow->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

	// ArrowComponent��StaticMesh�ɃA�^�b�`
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
	// Note:�p�����ꂽ�Ƃ��A���I�ɌĂ΂�Ȃ��Ă����s�����

	Super::BeginPlay();

	// hp�o��
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