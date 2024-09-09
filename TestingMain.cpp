#include "Barn.h"
#include "CropField.h"
#include "DrySoil.h"
#include "FarmLand.h"
#include "FertilizedSoil.h"
#include "FloodedSoil.h"
#include "FruitfulSoil.h"
#include "SoilState.h"
#include "Iterator.h"
#include "Traversal.h"

#include <iostream>
using namespace std; 

int main()
{
    cout << "----------------------------------------------------------------------------------------------" << endl; 

    //testing composite
    FarmLand* farm1 = new FarmLand();
    FarmLand* farm2 = new FarmLand(); 
    FarmLand* farmOfFarms = new FarmLand(); 

    SoilState* dry = new DrySoil(); 
    SoilState* fertilized = new FertilizedSoil(); 
    SoilState* flooded = new FloodedSoil(); 
    SoilState* fruitful = new FruitfulSoil(); 

    FarmUnit* wheat = new CropField("wheat", 1000, dry); 
    FarmUnit* corn = new CropField("corn", 1000, fertilized); 
    FarmUnit* rice = new CropField("rice", 1000, flooded);
    FarmUnit* mielies = new CropField("mielies", 1000, fruitful);  

    cout << "Wheat:" << endl; 
    cout << "Capacity: " << wheat->getTotalCapacity() << endl;  
    cout << "Amount: " << wheat->getAmount() << endl; 
    wheat->updateAmount(500);
    cout << "Amount after updating : " << wheat->getAmount() << endl; 
    cout << "Crop type: " << wheat->getCropType() << endl; 
    cout << "Soil state name: " << wheat->getSoilStateName() << endl; 
    wheat->add(wheat); 
    wheat->remove(wheat); 
    wheat->getChild(0); 
    //need to add and remove trucks

    cout << endl; 
    cout << "Corn:" << endl; 
    cout << "Capacity: " << corn->getTotalCapacity() << endl;  
    cout << "Amount: " << corn->getAmount() << endl; 
    corn->updateAmount(500);
    cout << "Amount after updating : " << corn->getAmount() << endl; 
    cout << "Crop type: " << corn->getCropType() << endl; 
    cout << "Soil state name: " << corn->getSoilStateName() << endl; 
    corn->add(corn); 
    corn->remove(corn); 
    corn->getChild(0); 
    //need to add and remove trucks

    cout << endl;     
    cout << "Rice:" << endl; 
    cout << "Capacity: " << rice->getTotalCapacity() << endl;  
    cout << "Amount: " << rice->getAmount() << endl; 
    rice->updateAmount(500);
    cout << "Amount after updating : " << rice->getAmount() << endl; 
    cout << "Crop type: " << rice->getCropType() << endl; 
    cout << "Soil state name: " << rice->getSoilStateName() << endl; 
    rice->add(rice); 
    rice->remove(rice); 
    rice->getChild(0); 
    //need to add and remove trucks
    
    cout << endl;     
    cout << "Mielies:" << endl; 
    cout << "Capacity: " << mielies->getTotalCapacity() << endl;  
    cout << "Amount: " << mielies->getAmount() << endl; 
    mielies->updateAmount(500);
    cout << "Amount after updating : " << mielies->getAmount() << endl; 
    cout << "Crop type: " << mielies->getCropType() << endl; 
    cout << "Soil state name: " << mielies->getSoilStateName() << endl; 
    mielies->add(mielies); 
    mielies->remove(mielies); 
    mielies->getChild(0); 
    //need to add and remove trucks

    FarmUnit* b1 = new Barn("wheat", 1000);
    FarmUnit* b2 = new Barn("corn", 1000);
    FarmUnit* b3 = new Barn("rice", 1000);    
    FarmUnit* b4 = new Barn("mielies", 1000);

    cout << endl;     
    cout << "Barn 1:" << endl; 
    cout << "Capacity: " << b1->getTotalCapacity() << endl;  
    cout << "Amount: " << b1->getAmount() << endl; 
    b1->updateAmount(500);
    cout << "Amount after updating : " << b1->getAmount() << endl; 
    cout << "Crop type: " << b1->getCropType() << endl; 
    cout << "Soil state name: " << b1->getSoilStateName() << endl; 
    b1->getSoilState();
    b1->setSoilState(dry); 
    b1->add(b1); 
    b1->remove(b1); 
    b1->getChild(0); 

    cout << endl;     
    cout << "Barn 2:" << endl; 
    cout << "Capacity: " << b2->getTotalCapacity() << endl;  
    cout << "Amount: " << b2->getAmount() << endl; 
    b2->updateAmount(500);
    cout << "Amount after updating : " << b2->getAmount() << endl; 
    cout << "Crop type: " << b2->getCropType() << endl; 
    cout << "Soil state name: " << b2->getSoilStateName() << endl; 
    b2->getSoilState();
    b2->setSoilState(dry); 
    b2->add(b2); 
    b2->remove(b2); 
    b2->getChild(0); 

    // delete wheat;
    // wheat = nullptr;
    // delete corn; 
    // corn = nullptr; 
    // delete rice;
    // rice = nullptr; 
    // delete mielies; 
    // mielies = nullptr; 

    farm1->add(wheat); 
    farm1->add(corn); 
    farm1->add(rice);
    farm1->add(mielies); 

    farm2->add(b1); 
    farm2->add(b2); 
    farm2->add(b3); 
    farm2->add(b4); 

    cout << endl;
    cout << "Farm 1:" << endl; 
    cout << "Capacity: " << farm1->getTotalCapacity() << endl;  
    cout << "Amount: " << farm1->getAmount() << endl; 
    farm1->updateAmount(4000);
    cout << "Amount after updating : " << farm1->getAmount() << endl; 
    cout << "Crop types: " << farm1->getCropType() << endl; 
    cout << "Soil state name: " << farm1->getSoilStateName() << endl; 
    //need to test remove and getchild 

    cout << endl;
    cout << "Farm 2:" << endl; 
    cout << "Capacity: " << farm2->getTotalCapacity() << endl;  
    cout << "Amount: " << farm2->getAmount() << endl; 
    farm2->updateAmount(4000);
    cout << "Amount after updating : " << farm2->getAmount() << endl; 
    cout << "Crop types: " << farm2->getCropType() << endl; 
    cout << "Soil state name: " << farm2->getSoilStateName() << endl; 
    //need to test remove and getchild 

    farmOfFarms->add(farm1);
    farmOfFarms->add(farm2); 
    
    // delete farm1; 
    // farm1 = nullptr; 
    // delete farm2; 
    // farm2 = nullptr; 

    cout << endl;
    cout << "Farm of Farms:" << endl; 
    cout << "Capacity: " << farmOfFarms->getTotalCapacity() << endl;  
    cout << "Amount: " << farmOfFarms->getAmount() << endl; 
    farmOfFarms->updateAmount(4000);
    cout << "Amount after updating : " << farmOfFarms->getAmount() << endl; 
    cout << "Crop types: " << farmOfFarms->getCropType() << endl; 
    cout << "Soil state name: " << farmOfFarms->getSoilStateName() << endl; 
    //need to test remove and getchild 

    delete farmOfFarms; 
    farmOfFarms = nullptr;

    //test adding a farmland to a farmland 

    cout << "----------------------------------------------------------------------------------------------" << endl; 

    cout <<"TESTING ITERATOR" << endl;

    return 0; 
}