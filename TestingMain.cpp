#include "CropField.h"
#include "DrySoil.h"
#include "FarmLand.h"
#include "FertilizedSoil.h"
#include "FloodedSoil.h"
#include "FruitfulSoil.h"
#include "SoilState.h"

#include <iostream>
using namespace std; 

int main()
{
    //testing composite
    FarmLand* farm1 = new FarmLand();

    SoilState* dry = new DrySoil(); 
    SoilState* fertilized = new FertilizedSoil(); 
    SoilState* flooded = new FloodedSoil(); 
    SoilState* fruitful = new FruitfulSoil(); 

    FarmUnit* wheat = new CropField("wheat", 1000, dry); 
    FarmUnit* corn = new CropField("corn", 1000, fertilized); 
    FarmUnit* rice = new CropField("rice", 1000, flooded);
    FarmUnit* mielies = new CropField("mielies", 1000, fruitful);  

    cout << "Wheat" << endl; 
    cout << "Capacity: " << wheat->getTotalCapacity(); 
    cout << "Amount: " << wheat->getAmount(); 
    wheat->updateAmount(500); 
    cout << "Amount after updating : " << wheat->getAmount(); 
    cout << "Crop type: " << wheat->getCropType(); 
    cout << "Soil state name: " << wheat->getSoilStateName(); 
    wheat->add(wheat); 
    wheat->remove(wheat); 
    wheat->getChild(0); 
    //need to add and remove trucks


    farm1->add(wheat); 
    farm1->add(corn); 
    farm1->add(rice);
    farm1->add(mielies); 

    //test adding a farmland to a farmland 
    return 0; 
}