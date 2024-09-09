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
    if (fieldState == "Dry")
        cout << "Fertilizer Truck is delivering fertilizer to the crop field." << endl; 
    else cout << "Can't deliver fertilizer since the soil is not dry." << endl; 
}