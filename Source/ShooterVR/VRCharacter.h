// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VRCharacter.generated.h"

UCLASS()
class SHOOTERVR_API AVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private: 
	//Private functions
	void UpdateTeleportMarker();
	void MoveForward(float throttle);
	void MoveRight(float throttle);

private:
	//Private Components

	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent * VRRoot;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* TeleportMarker;
private:
	//Editable Components
	UPROPERTY(EditAnywhere)
	float MaxTeleport = 1000;

};
