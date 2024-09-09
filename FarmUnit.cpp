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
    else if (amount + num < 0)
        amount = 0; 
    else amount += num; 
    cout << "Amount updated. " << endl; 
}

int FarmUnit::getAmount()
{
    return amount; 
}

vector<Truck*> FarmUnit::getTruckList()
{
    return truckList; 
}

FarmUnit* FarmUnit::getChild(int index)
{
    cout << "FarmUnit has no children" << endl; 
    return nullptr; 
}

void FarmUnit::buyTruck(Truck* truck)
{
    truckList.push_back(truck); 
}

void FarmUnit::sellTruck(Truck* truck)
{
    //NEED TO CHECK IF THIS WORKS

    for (int i=0; i<truckList.size(); i++)
    {
        if (truckList[i] == truck)
        {
            delete truckList[i]; 
            truckList[i] = nullptr; 
            truckList.erase(truckList.begin() + i);
            break; 
        }
    }
}

void FarmUnit::callTruck()
{
    for (int i=0; i<truckList.size(); i++)
        truckList[i]->startEngine(); 
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
