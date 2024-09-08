#include "DeliveryTruck.h"

DeliveryTruck::DeliveryTruck(SoilState* fieldState, FarmUnit* farmUnit)
{
    this->fieldState = fieldState; 
    this->farmUnit = farmUnit; 
} 

void FertilizerTruck::startEngine()
{
    //decrease amount using the formula = updateAmount(-1*amount*harvestCrop
}