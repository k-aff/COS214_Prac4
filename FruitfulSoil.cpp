#include "FruitfulSoil.h"

FruitfulSoil::FruitfulSoil(): SoilState("Fruitful"){}

double FruitfulSoil::harvestCrops(){
    return 0.3;   
}

double FruitfulSoil::rain(){
    return 10;
}

string FruitfulSoil::getName(){
    return SoilState::getName();
}