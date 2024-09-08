#include "FarmUnit.h"

#include <iostream>
using namespace std; 

int FarmUnit::getTotalCapacity()
{
    return capacity; 
}

string FarmUnit::getSoilStateName()
{
    return soilState->getName(); 
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

void FarmUnit::callTruck()
{
    //needs to be filled in after iterator is done
}
