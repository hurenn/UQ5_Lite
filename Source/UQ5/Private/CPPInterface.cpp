


#include "CPPInterface.h"
#include "Kismet/KismetSystemLibrary.h"

// Add default functionality here for any ICPPInterface functions that are not pure virtual.

void ICPPInterface::PrintHello()
{
	UKismetSystemLibrary::PrintString(NULL, FString::Printf(TEXT("Hello")), true, true, FColor::Cyan, 5.f, TEXT("None"));
}

int ICPPInterface::Add(int A, int B)
{
	return A + B;
}