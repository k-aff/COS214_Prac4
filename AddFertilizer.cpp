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
    if (soilState != nullptr)
    {
        if (soilState->getName() == "Dry")
        {
            cout << "Fertilizer added, production has been increased." << endl; 
            return 0.2; 
        }
        else 
        {
            cout << "Fertilizer can only be added to dry soil" << endl; 
            return 1; 
        }
    }
    else return 1; 
}

void AddFertilizer::harvest()
{

}