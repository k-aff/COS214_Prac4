#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"

class CropField : public FarmUnit
{
    public:
        virtual SoilState* getSoilState(); 
        virtual void setSoilState(SoilState* newState);
        virtual void buyTruck(Truck* truck); 
        virtual void sellTruck(Truck* truck);

};

#endif;