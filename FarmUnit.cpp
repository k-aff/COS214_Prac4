#include "FarmUnit.h"

#include <iostream>
using namespace std; 

string FarmUnit::getCropType()
{
    return typeOfCrop; 
}

virtual string getSoilStateName()
{
    return soilState.getName(); 
}
