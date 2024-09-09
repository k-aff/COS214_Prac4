#ifndef ADDFERTILIZER_H
#define ADDFERTILIZER_H

#include "Decorator.h"

class AddFertilizer : public Decorator
{
    public: 
        virtual void increaseProduction();
        virtual void harvest(); 
        virtual void getLeftOverCapacity(); 
};

#endif