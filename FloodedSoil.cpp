#include "FloodedSoil.h"

FloodedSoil::FloodedSoil(): SoilState("Flooded"){}

double FloodedSoil::harvestCrops(){
    return 0;   
}

double FloodedSoil::rain(){
    return 0;
}

string FloodedSoil::getName(){
    return SoilState::getName();
}