#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H

#include "FarmUnit.h"

class DeliveryTruck : public Truck 
{
    private:  
        FarmUnit* farmUnit; 

    public: 
        DeliveryTruck(FarmUnit* farmUnit); 
        virtual void startEngine(); 
}; 

#endif