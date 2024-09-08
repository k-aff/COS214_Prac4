#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"

class FloodedSoil : public SoilState{
    public:
        virtual double harvestCrops();
        virtual double rain();
        virtual string getName();
};

#endif

