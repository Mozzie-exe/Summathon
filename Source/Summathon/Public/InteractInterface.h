#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

// DÝKKAT: Aþaðýdaki SATIRDA_YAZAN_API kýsmýný kendi projenin adýyla deðiþtir (Örn: FPSOYUNUM_API)
class SUMMATHON_API IInteractInterface
{
	GENERATED_BODY()

public:
	// Blueprint'lerden çaðrýlabilmesi için gereken sihirli kod
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
	void Interact(AActor* Interactor);
	
};