#ifndef ADDBARN_H
#define ADDBARN_H

#include "Decorator.h"

class AddBarn : public Decorator
{        
    public: 
        AddBarn(FarmUnit* component, int capacity); 
        virtual void increaseProduction();
        virtual void harvest(); 
};

#endif