


#include "CPP_MyCPPAbstractBPChild.h"
#include "Kismet/KismetSystemLibrary.h"

void ACPP_MyCPPAbstractBPChild::Greeting_Implementation() 
{
	UKismetSystemLibrary::PrintString(this, GreetingMessage, true, true, FColor::Cyan, 5.f, TEXT("None"));
}

