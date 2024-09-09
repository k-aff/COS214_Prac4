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
    soilState = nullptr; 
    //!!!
    truckList = component->getTruckList(); 
    if (component->getSoilState() == nullptr)
        soilType = "NA";
    else soilType = component->getSoilStateName(); 
}

float AddFertilizer::increaseProduction()
{
    if (soilType == "Dry")
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

void AddFertilizer::harvest()
{

}
