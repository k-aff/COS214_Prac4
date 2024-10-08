#ifndef FERTILIZEDSOIL_H
#define FERTILIZEDSOIL_H

#include "SoilState.h"

class FertilizedSoil : public SoilState{
    public: 
        virtual double harvestCrops();
        virtual double rain();
        virtual string getName();
};

#endif

