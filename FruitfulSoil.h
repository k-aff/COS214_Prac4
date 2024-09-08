#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "SoilState.h"

class FruitfulSoil : public SoilState{

    FruitfulSoil();
    virtual double harvestCrops();
    virtual double rain();
    virtual string getName();
};

#endif

