// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Star.generated.h"

class UBoxComponent;
class URotatingMovementComponent;

UCLASS()
class MYFIRSTTRYWITHUNREAL_API AStar : public AActor
{
	GENERATED_BODY()
	
public:	
	AStar();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* StarTriggerBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	URotatingMovementComponent* StarRotatingComponent;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	virtual void Tick(float DeltaTime) override;

};
