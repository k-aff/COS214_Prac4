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
        
        virtual ~Decorator()
        {
            if (component != nullptr)
            {
                delete component;
                component = nullptr;
            }
        }

        virtual void add(FarmUnit* unit)
        {
            cout << "Can't add a new FarmUnit to a Decorator." << endl; 
        }

        virtual void remove(FarmUnit* unit)
        {
            cout << "Can't remove a FarmUnit from a Decorator." << endl; 
        }
};

#endif