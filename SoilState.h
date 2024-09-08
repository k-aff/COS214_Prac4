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
        virtual double harvestCrops();
        virtual double rain();
        virtual string getName();

};

#endif