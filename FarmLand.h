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
        FarmLand(); 
        virtual void add(FarmUnit* unit); 
        virtual void remove(FarmUnit* unit); 
        virtual FarmUnit* getChild(int index);
        virtual string getSoilStateName();  
        virtual SoilState* getSoilState(); 
        virtual void setSoilState(SoilState* newState); 
        ~FarmLand(); 

}; 

#endif