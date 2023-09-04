


#include "MyCppComponent_virtual_child.h"

void AMyCppComponent_virtual_child::SetPoint(int myPoint) {
	ACppComponent::SetPoint(myPoint - 50);
}