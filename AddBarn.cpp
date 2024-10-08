#include "AddBarn.h"
#include "FarmUnit.h"

#include <iostream>
using namespace std; 

AddBarn::AddBarn(FarmUnit* component, int capacity)
{
    this->component = component; 
    this->capacity = capacity + component->getTotalCapacity(); 

    typeOfCrop = component->getCropType();
    amount = component->getAmount(); 
    soilState = nullptr; 
    //!!!
    truckList = component->getTruckList(); 

}

void AddBarn::increaseProduction()
{
    cout << "Cannot increase production in a Barn" << endl; 
}

void AddBarn::harvest()
{
    callTruck(); 
} 
