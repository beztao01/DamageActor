// Fill out your copyright notice in the Description page of Project Settings.
// Rellene su aviso de derechos de autor en la página Descripción de Configuración del proyecto.


#include "MyActor01.h"

// Sets default values
// Establece valores predeterminados
 AMyActor01::AMyActor01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// Configure este actor para que llame a Tick() cada fotograma.Puede desactivar esto para mejorar el rendimiento si no lo necesita.
	PrimaryActorTick.bCanEverTick = true;

} 

// Called when the game starts or when spawned
// Se llama cuando comienza el juego o cuando se genera
void AMyActor01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
// Se Llama a cada fotograma
void AMyActor01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

