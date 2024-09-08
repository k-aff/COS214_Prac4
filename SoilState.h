#ifndef SOILSTATE_H
#define SIOLSTATE_H

#include <string>
using namespace std;

class SoilState{

    protected:
        string name;

    public:
        SoilState(string name){
            this->name = name;
        }
        virtual double harvestCrops() = 0;
        virtual double rain() = 0;
        virtual string getName() = 0;

};

#endif