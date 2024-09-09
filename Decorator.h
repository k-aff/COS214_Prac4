#ifndef DECORATOR_H
#define DECORATOR_H

#include "FarmUnit.h"

class Decorator : public FarmUnit
{
    protected: 
        FarmUnit* component;

    public: 
        virtual float increaseProduction() = 0;
        virtual void harvest() = 0; 

        int getLeftOverCapacity() 
        {
            return capacity - amount;
        } 
        
        ~Decorator()
        {
            if (component != nullptr)
            {
                delete component;
                component = nullptr;
            }
        }
};

#endif