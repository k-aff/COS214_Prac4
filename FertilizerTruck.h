#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include "FarmUnit.h"
#include "SoilState.h"
#include "Truck.h"

class FertilizerTruck : public Truck 
{
    private:
        SoilState* fieldState; 
        FarmUnit* farmUnit;

    public:
        FertilizerTruck(SoilState* fieldState, FarmUnit* farmUnit); 
        virtual void startEngine(); 
}; 

#endif;