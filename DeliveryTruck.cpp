#include "DeliveryTruck.h"

#include <iostream>
using namespace std; 

DeliveryTruck::DeliveryTruck(FarmUnit* farmUnit)
{
    this->farmUnit = farmUnit; 
} 

void DeliveryTruck::startEngine()
{
    //decrease amount using the formula = updateAmount(-1*amount*harvestCrop
    if (farmUnit->getSoilState() != nullptr)
        farmUnit->updateAmount(-1*farmUnit->getAmount()*farmUnit->getSoilState()->harvestCrops());
    else farmUnit->updateAmount(-1*farmUnit->getAmount()); 
}