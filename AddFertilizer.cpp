#include "AddFertilizer.h"
#include "FarmUnit.h"

#include <iostream>
using namespace std; 

AddFertilizer::AddFertilizer(FarmUnit* component)
{
    this->component = component; 

    typeOfCrop = component->getCropType(); 
    capacity = component->getTotalCapacity(); 
    amount = component->getAmount(); 
    soilState = component->getSoilState(); 
    truckList = component->getTruckList(); 
}

float AddFertilizer::increaseProduction()
{
    if (soilState->getName() == "Dry")
        return 0.2; 
    else return 1; 
}

void AddFertilizer::harvest()
{

}