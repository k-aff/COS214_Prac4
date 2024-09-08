#ifndef FARMUNIT_H
#define FARMUNIT_H

#include "SoilState.h"
#include "Truck.h"

#include <string>
#include <vector>
using namespace std; 

class FarmUnit
{
    protected: 
        string typeOfCrop; 
        int capacity; 
        int amount; 
        SoilState* soilState; 
        vector<Truck*> truckList; 

    public:
        //class operations 
        virtual int getTotalCapacity(); 
        virtual string getSoilStateName();
        virtual string getCropType(); 
        void updateAmount(int num); 
        virtual ~FarmUnit(); 

        //state class operations
        virtual SoilState* getSoilState() = 0; 
        virtual void setSoilState(SoilState* newState) = 0; 
        
        //composite class operations
        virtual void add(FarmUnit* unit) = 0; 
        virtual void remove(FarmUnit* unit) = 0; 
        virtual FarmUnit* getChild(int index) = 0; 

        //observer class operations
        virtual void buyTruck(Truck* truck) = 0; 
        virtual void sellTruck(Truck* truck) = 0; 
        virtual void callTruck(); 

}; 

#endif; 