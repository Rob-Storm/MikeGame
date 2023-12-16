// None

#pragma once

#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "AButton.generated.h"

UCLASS(Blueprintable, Category="Level Design")
class MIKEGAMECPP_API AAButton : public AActor, public IInteractionInterface
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	AAButton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Variables

	UPROPERTY(EditAnywhere, Blueprintable, BlueprintReadWrite, Category = "Actor Settings")
	UStaticMesh* _Model;


	//Functions
	UFUNCTION(Blueprintable)
	void Interact(bool CalledByPlayer, int32 flag);

};
