#include "FarmUnit.h"

#include <iostream>
using namespace std; 

string FarmUnit::getSoilStateName()
{
    return soilState->getName(); 
}

int FarmUnit::getTotalCapacity()
{
    return capacity; 
}

string FarmUnit::getCropType()
{
    return typeOfCrop; 
}

void FarmUnit::updateAmount(int num)
{
    if (amount + num >= capacity)
        amount = capacity; 
    if (amount + num < 0)
        amount = 0; 
    else amount += num; 
}

int FarmUnit::getAmount()
{
    return amount; 
}

vector<Truck*> FarmUnit::getTruckList()
{
    return truckList; 
}

void FarmUnit::callTruck()
{
    //needs to be filled in after iterator is done
}

FarmUnit::~FarmUnit()
{
    if (soilState != nullptr)
    {
        delete soilState; 
        soilState = nullptr; 
    }

    if (!truckList.empty())
    {
        for (int i = 0; i < truckList.size(); i++) 
            delete truckList[i];
        truckList.clear(); 
    }
}

SoilState* FarmUnit::getSoilState()
{
    return soilState;
}

void FarmUnit::setSoilState(SoilState* newState)
{
    if (soilState != nullptr)
    {
        delete soilState; 
        soilState = nullptr; 
    }
    soilState = newState; 
}
