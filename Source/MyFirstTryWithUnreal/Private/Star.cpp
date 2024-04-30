


#include "Star.h"

AStar::AStar()
{

	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(SceneComponent);

	StarTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("StarTriggerBox"));
	StarTriggerBox->SetupAttachment(GetRootComponent());
	StarTriggerBox->SetBoxExtent(FVector(32.f, 500.f, 200.f));
	StarTriggerBox->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	StarRotatingComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("StarRotatingComponent"));
	StarRotatingComponent->SetupAttachment(GetRootComponent());
}

void AStar::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStar::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	UE_LOG(LogTemp, Warning, TEXT("trigger"));
	Destroy();

}

