#include "DeliveryTruck.h"

#include <iostream>
using namespace std; 

DeliveryTruck::DeliveryTruck(FarmUnit* farmUnit)
{
    this->farmUnit = farmUnit; 
} 

void DeliveryTruck::startEngine()
{
    cout << "Started Engine." << endl; 
    if (farmUnit->getSoilState() != nullptr)
        farmUnit->updateAmount(-1*farmUnit->getAmount()*farmUnit->getSoilState()->harvestCrops());
    else farmUnit->updateAmount(-1*farmUnit->getAmount()); 
    cout << "Delivery Truck sent to collect harvested crop." << endl; 
}