#include "FarmLand.h"

#include <iostream>
#include <vector>
using namespace std; 

FarmLand::FarmLand()
{
    typeOfCrop = "";
    capacity = 0; 
    amount = 0; 
    soilState = nullptr; 
}

void FarmLand::add(FarmUnit* unit)
{
    children.push_back(unit); 

    //add to to type of crop 
    if (children.size() == 1)
        typeOfCrop = unit->getCropType(); 
    else typeOfCrop += ", " + unit->getCropType();

    //add to capacity
    capacity += unit->getTotalCapacity();

    //add to amount 
    amount += unit->getAmount();  

    //add trucks 
//     for (int i=0; i<unit->getTruckList().size(); i++)
//     {
//         truckList.push_back(unit->getTruckList()[i]); 
//     }
}

void FarmLand::remove(FarmUnit* unit)
{
    //NEED TO CHECK IF THIS WORKS

    for (int i=0; i<children.size(); i++)
    {
        if (children[i] == unit)
        {
            delete children[i]; 
            children[i] = nullptr; 
            children.erase(children.begin() + i);
            // cout << "Removed FarmUnit." << endl;
            return; 
        }
    }
}

FarmUnit* FarmLand::getChild(int index)
{
    if (index >= 0 && index < children.size()) 
    {
        return children[index]; 
    }
    else 
    {
        cout << "Invalid index" << endl; 
        return nullptr; 
    }
} 

string FarmLand::getSoilStateName()
{
    return "FarmLand does not have a soil state."; 
} 

SoilState* FarmLand::getSoilState()
{
    cout << "FarmLand has multiple soil states." << endl;  
    return nullptr; 
}

void FarmLand::setSoilState(SoilState* newState)
{
    cout << "Can't set a single soil state for FarmLand." << endl; 
}

FarmLand::~FarmLand()
{
    if (!children.empty())
    {
        for (int i=children.size()-1; i>=0; i--)
        {
            remove(children[i]); 
        }
    }
}