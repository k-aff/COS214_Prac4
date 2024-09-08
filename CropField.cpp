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



