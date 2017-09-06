
#include "TankPlayerController.h"


//开始
void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cant get Controlled Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Get tank name is :%s"), *ControlledTank->GetName());
	}

}

//每帧执行
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AimTowardsCrosshair();
}


//###################################################################//

//获取控制的坦克
ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	FVector HitLocation;

	if (GetSightRayHitLocation(HitLocation)) 
	{
		GetControlledTank()->AimAt(HitLocation);
		
	}

}

//视线落点
bool ATankPlayerController::GetSightRayHitLocation(FVector & HitLocation) const
{
	int32 ViewPortX, ViewPortY;
	GetViewportSize(ViewPortX, ViewPortY);
	auto ScreenLocation = FVector2D(ViewPortX*CrosshairXLocation, ViewPortY* CrosshairYLocation);

	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		GetLookVectorHitLocation(LookDirection, HitLocation);
		
	}
	
	return true;
}

//投影到3D场景
bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector & LookDirection) const
{
	FVector CameraWorldLocation, WorldDirection;

	DeprojectScreenPositionToWorld(
		ScreenLocation.X,
		ScreenLocation.Y,
		CameraWorldLocation, 
		WorldDirection
	);
	return true;
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + LookDirection*LineTraceRange;

	if (GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECollisionChannel::ECC_Visibility)
		)
	{
		HitLocation = HitResult.Location;
		return true;
	}
	return false;
}

