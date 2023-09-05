


#include "CPPAbstractChild.h"
#include "Kismet/KismetSystemLibrary.h"

void ACPPAbstractChild::Greeting(FString message) 
{
	UKismetSystemLibrary::PrintString(this, message, true, true, FColor::Cyan, 10.f, TEXT("None"));
}