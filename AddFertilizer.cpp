#include "AddFertilizer.h"
#include "FarmUnit.h"
#include "FertilizedSoil.h"

#include <iostream>
using namespace std; 

AddFertilizer::AddFertilizer(FarmUnit* component)
{
    this->component = component; 

    typeOfCrop = component->getCropType(); 
    capacity = component->getTotalCapacity(); 
    amount = component->getAmount(); 
    soilState = nullptr; 
    //!!!
    truckList = component->getTruckList(); 
    if (component->getSoilState() == nullptr)
        soilType = "NA";
    else soilType = component->getSoilStateName(); 
}

void AddFertilizer::increaseProduction()
{
    if (soilType == "Dry")
    {
        cout << "Fertilizer added, production has been increased." << endl; 
        component->setSoilState(new FertilizedSoil); 
        amount *= 1.2; 
    }
    else 
    {
        cout << "Fertilizer can only be added to dry soil" << endl; 
    }
}

void AddFertilizer::harvest()
{
    increaseProduction(); 
    callTruck(); 
}
