

#include "Rolling.h"
#include "SplitScreen_Controller.h"


// Sets default values
ASplitScreen_Controller::ASplitScreen_Controller()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplitScreen_Controller::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASplitScreen_Controller::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ASplitScreen_Controller::ToggleSplitScreen(AActor* Context, bool status)
{
	if (Context) 
	{
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(status);
	}
}