#ifndef BARN_H
#define BARN_H

#include "FarmUnit.h"

#include <string>
using namespace std; 

class Barn : public FarmUnit
{
    public:
        Barn(string typeOfCrop, int capacity); 
        virtual string getSoilStateName();
        virtual SoilState* getSoilState(); 
        virtual void setSoilState(SoilState* newState);
        virtual void buyTruck(Truck* truck); 
        virtual void sellTruck(Truck* truck);

};

#endif;