#include "FertilizerTruck.h"

#include <iostream>
using namespace std; 

FertilizerTruck::FertilizerTruck(FarmUnit* farmUnit)
{
    this->farmUnit = farmUnit; 
    if (farmUnit->getSoilState() == nullptr)
        this->fieldState == "NA";
    else this->fieldState = farmUnit->getSoilStateName(); 
} 

void FertilizerTruck::startEngine()
{
    //decrease amount using the formula = updateAmount(-1*amount*harvestCrop
    cout << "incomplete in fertilizerTruck" << endl; 
}