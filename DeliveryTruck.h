#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H

#include "FarmUnit.h"

class DeliveryTruck : public Truck 
{
    private: 
        int amount; 
        FarmUnit* farmUnit; 

    public: 
        DeliveryTruck(int amount, FarmUnit* farmUnit); 
        virtual void startEngine(); 
}; 

#endif