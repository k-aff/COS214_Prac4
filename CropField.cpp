#include "CropField.h"
#include "SoilState"

#include <iostream>
using namespace std; 

CropField::CropField(string typeOfCrop, int capacity, SoilState* soilState)
{
    this->typeOfCrop = typeOfCrop; 
    this->capacity = capacity; 
    this->soilState = soilState; 
    this->amount = 0; 
    this->truckList = nullptr; 
}

SoilState* CropField::getSoilState()
{
    return soilState;
}

void CropField::setSoilState(SoilState* newState)
{
    if (soilState != nullptr)
    {
        delete soilState; 
        soilState = nullptr; 
    }
    soilState = newState; 
}

