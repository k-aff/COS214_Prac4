#ifndef ADDBARN_H
#define ADDBARN_H

#include "Decorator.h"

class AddBarn : public Decorator
{        
    public: 
        AddBarn(FarmUnit* component, int capacity); 
        virtual float increaseProduction();
        virtual void harvest(); 
        virtual int getLeftOverCapacity(); 
};

#endif