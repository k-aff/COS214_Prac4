#ifndef DECORATOR_H
#define DECORATOR_H

#include "FarmUnit.h"

class Decorator : public FarmUnit
{
    private: 
        FarmUnit component;

    public: 
        virtual void increaseProduction() = 0;
        virtual void harvest() = 0; 
        virtual void getLeftOverCapacity() = 0; 
};

#endif