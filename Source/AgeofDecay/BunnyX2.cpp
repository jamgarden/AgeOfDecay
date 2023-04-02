#include "BunnyX2.h"

// Sets default values
ABunnyX2::ABunnyX2()
{
    // Set this pawn to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Create the sprite component
    SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComponent"));

    // Set the sprite component as the root component
    RootComponent = SpriteComponent;
}

// Called when the game starts or when spawned
void ABunnyX2::BeginPlay()
{
    Super::BeginPlay();

    // Set the sprite for the sprite component if a valid sprite asset is available
    if (SpriteAsset != nullptr)
    {
        SpriteComponent->SetSprite(SpriteAsset);
    }
}

// Called every frame
void ABunnyX2::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // Add any custom behavior for the bunny here
}

// Called to bind functionality to input
void ABunnyX2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    // Add any custom input bindings for the bunny here
}
