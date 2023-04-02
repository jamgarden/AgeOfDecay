#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PaperSpriteComponent.h"
#include "BunnyX2.generated.h"

UCLASS()
class AGEOFDECAY_API ABunnyX2 : public APawn
{
    GENERATED_BODY()

public:
    ABunnyX2();

    // The sprite asset for the sprite component
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
        UPaperSprite* SpriteAsset;

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
        UPaperSpriteComponent* SpriteComponent;
};