#include "CropField.h"
#include "SoilState.h"

#include <iostream>
using namespace std; 

CropField::CropField(string typeOfCrop, int capacity, SoilState* soilState)
{
    this->typeOfCrop = typeOfCrop; 
    this->capacity = capacity; 
    this->soilState = soilState; 
    this->amount = 0; 
}

void CropField::add(FarmUnit* unit)
{
    cout << "Can't add a FarmUnit to a CropField." << endl; 
}

void CropField::remove(FarmUnit* unit)
{
    cout << "Can't remove a FarmUnit from a CropField." << endl; 
}
