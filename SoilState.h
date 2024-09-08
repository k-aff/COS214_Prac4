#ifndef SOILSTATE_H
#define SOILSTATE_H

#include <string>
using namespace std;

class SoilState{
    public:
        virtual double harvestCrops() = 0;
        virtual double rain() = 0;
        virtual string getName() = 0;

};

#endif