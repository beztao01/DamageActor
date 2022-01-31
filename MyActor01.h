// Fill out your copyright notice in the Description page of Project Settings.
// Rellene su aviso de derechos de autor en la página Descripción de Configuración del proyecto.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor01.generated.h"

UCLASS()
class MYACTOR_API AMyActor01 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	// Establece valores predeterminados para las propiedades de este actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		int32 TotalDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		float DamageTimeInSeconds;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
		float DamagePerSecond;
	AMyActor01();

protected:
	// Called when the game starts or when spawned
	// Se llama cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// se Llama a cada fotograma
	virtual void Tick(float DeltaTime) override;

};
