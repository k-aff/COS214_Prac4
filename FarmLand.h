#ifndef FARMLAND_H
#define FARMLAND_H

#include "FarmUnit.h"

#include <vector>
using namespace std; 

class FarmLand : public FarmUnit
{
    private:
        vector<FarmUnit*> children; 

    public:
        virtual int getTotalCapacity(); 
        virtual void add(FarmUnit* unit); 
        virtual void remove(FarmUnit* unit); 
        virtual FarmUnit* getChild(int index); 

}; 

#endif