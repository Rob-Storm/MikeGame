// None


#include "AButton.h"

// Sets default values
AAButton::AAButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAButton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAButton::Interact(bool CalledByPlayer, int32 flag)
{
	FString CallerName = this->GetName();
	FString DebugMessage = FString::Printf(TEXT("Actor: %s called interaction."), *CallerName);

		
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, DebugMessage);
}

