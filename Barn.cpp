#include "Barn.h"
#include "SoilState.h"

#include <iostream>
using namespace std; 

Barn::Barn(string typeOfCrop, int capacity)
{
    this->typeOfCrop = typeOfCrop; 
    this->capacity = capacity; 
    this->amount = 0; 
    soilState = nullptr;  
}

string Barn::getSoilStateName()
{
    return "Barn does not have a soil state."; 
}

SoilState* Barn::getSoilState()
{
    cout << "Barn does not have a soil state."; 
    return nullptr; 
}

void Barn::setSoilState(SoilState* newState)
{
    cout << "Barn does not have a soil state."; 
}
