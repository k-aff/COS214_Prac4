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
        virtual string getSoilStateName();
        int getTotalCapacity(); 
        string getCropType(); 
        void updateAmount(int num); 
        int getAmount(); 
        vector<Truck*> getTruckList(); 
        virtual ~FarmUnit(); 

        //state class operations
        virtual SoilState* getSoilState(); 
        virtual void setSoilState(SoilState* newState); 
        
        //composite class operations
        virtual void add(FarmUnit* unit) = 0; 
        virtual void remove(FarmUnit* unit) = 0; 
        virtual FarmUnit* getChild(int index); 

        //observer class operations
        virtual void buyTruck(Truck* truck); 
        virtual void sellTruck(Truck* truck); 
        virtual void callTruck(); 

}; 

#endif