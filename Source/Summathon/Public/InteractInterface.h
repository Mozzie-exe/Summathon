#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"


UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

UENUM(BlueprintType)
enum class EItemType : uint8
{
	Food UMETA(DisplayName = "Food"),
	Weapon UMETA(DisplayName = "Weapon"),
	Resource UMETA(DisplayName = "Resource"),
	Currency UMETA(DisplayName = "Currency"),
	Medicine UMETA(DisplayName = "Medicine"),
	Drink UMETA(DisplayName = "Drink")
};



USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	EItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	float HungerRestore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	float HealAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	class UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 CurrentCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	TSubclassOf<AActor> ItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FText ItemDescription;

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


