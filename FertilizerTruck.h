#ifndef FERTILIZERTRUCK_H
#define FERTILIZERTRUCK_H

#include "FarmUnit.h"
#include "SoilState.h"
#include "Truck.h"

class FertilizerTruck : public Truck 
{
    private:
        string fieldState; 
        FarmUnit* farmUnit;

    public:
        FertilizerTruck(FarmUnit* farmUnit); 
        virtual void startEngine(); 
}; 

#endif