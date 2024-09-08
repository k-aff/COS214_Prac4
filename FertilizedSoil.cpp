#include "FertilizedSoil.h"

FertilizedSoil::FertilizedSoil(): SoilState("Fertilized"){}

double FertilizedSoil::harvestCrops(){
    return 0.5;   
}

double FertilizedSoil::rain(){
    return 10.2;
}

string FertilizedSoil::getName(){
    return SoilState::getName();
}