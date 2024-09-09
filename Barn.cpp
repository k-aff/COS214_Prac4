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
    cout << "Barn does not have a soil state." << endl;
    return nullptr; 
}

void Barn::setSoilState(SoilState* newState)
{
    cout << "Barn does not have a soil state." << endl;  
}

void Barn::add(FarmUnit* unit)
{
    cout << "Can't add a FarmUnit to a Barn." << endl; 
}

void Barn::remove(FarmUnit* unit)
{
    cout << "Can't remove a FarmUnit from a Barn." << endl; 
}
