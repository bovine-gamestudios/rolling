

#pragma once

#include "GameFramework/Actor.h"
#include "SplitScreen_Controller.generated.h"

UCLASS()
class ROLLING_API ASplitScreen_Controller : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplitScreen_Controller();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintCallable, Category = "splitscreen")
	static void ToggleSplitScreen(AActor* Context, bool status);
	
};
