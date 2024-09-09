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
    soilState = component->getSoilState();
    truckList = component->getTruckList(); 

}

float AddBarn::increaseProduction()
{
    cout << "Cannot increase production in a Barn" << endl; 
    return 1; 
}

void AddBarn::harvest()
{

} 