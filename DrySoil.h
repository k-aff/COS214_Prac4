#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "SoilState.h"

class DrySoil: public SoilState{
    public: 
        virtual double harvestCrops();
        virtual double rain();
        virtual string getName();
};

#endif

