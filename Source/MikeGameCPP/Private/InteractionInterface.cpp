// None


#include "InteractionInterface.h"

// Add default functionality here for any IInteractionInterface functions that are not pure virtual.

void IInteractionInterface::Interact(bool CalledByPlayer, int32 flag)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, TEXT("Interact"));
}
