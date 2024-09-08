#include "FertilizerTruck.h"

#include <iostream>
using namespace std; 

FertilizerTruck::FertilizerTruck(SoilState* fieldState, FarmUnit* farmUnit)
{
    this->fieldState = fieldState; 
    this->farmUnit = farmUnit; 
} 

void FertilizerTruck::startEngine()
{
    //decrease amount using the formula = updateAmount(-1*amount*harvestCrop
}