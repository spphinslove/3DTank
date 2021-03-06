// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankAimingComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

UCLASS()
class GAME3D_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UTankAimingComponent* TankAimingComponent = nullptr;

public:	

	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void AimAt(FVector Hitlocation);
	
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetBarrelReference(UStaticMeshComponent* BarrelToReset);
	
	UPROPERTY(EditAnywhere, Category = "Firing")
	float LaunchSpeed = 100000;
	
};
