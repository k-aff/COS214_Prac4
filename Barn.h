#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h"

class Barn : public FarmUnit
{
    public:
        virtual string getSoilStateName();
        virtual SoilState* getSoilState(); 
        virtual void setSoilState(SoilState* newState);
        virtual void buyTruck(Truck* truck); 
        virtual void sellTruck(Truck* truck);

};

#endif;