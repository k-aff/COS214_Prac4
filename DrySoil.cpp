#include "DrySoil.h"

DrySoil::DrySoil(): SoilState("Dry"){}

double DrySoil::harvestCrops(){
    return 0.1;   
}

double DrySoil::rain(){
    return 15;
}

string DrySoil::getName(){
    return SoilState::getName();
}