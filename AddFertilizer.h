#ifndef ADDFERTILIZER_H
#define ADDFERTILIZER_H

#include "Decorator.h"

class AddFertilizer : public Decorator
{
    private:
        string soilType;
        
    public: 
        AddFertilizer(FarmUnit* component); 
        virtual float increaseProduction();
        virtual void harvest(); 
};

#endif