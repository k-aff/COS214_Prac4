#ifndef ADDBARN_H
#define ADDBARN_H

#include "Decorator.h"

class AddBarn : public Decorator
{
    public: 
        virtual void increaseProduction();
        virtual void harvest(); 
        virtual void getLeftOverCapacity(); 
};

#endif