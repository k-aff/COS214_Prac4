#ifndef FERTILIZEDSOIL_H
#define FERTILIZEDSOIL_H

#include "SoilState.h"

class FertilizedSoil : public SoilState{

    FertilizedSoil();
    virtual double harvestCrops();
    virtual double rain();
    virtual string getName();
};

#endif

