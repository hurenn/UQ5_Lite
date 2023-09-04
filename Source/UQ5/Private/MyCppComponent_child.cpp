


#include "MyCppComponent_child.h"
#include "Kismet/KismetSystemLibrary.h"

AMyCppComponent_child::AMyCppComponent_child() {
	//SetPoint(100);
	//UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Point:%d"), GetPoint()), true, true, FColor::Cyan, 5.f);
}

void AMyCppComponent_child::SetPoint(int myPoint) {
	ACppComponent::SetPoint(myPoint - 30);
}