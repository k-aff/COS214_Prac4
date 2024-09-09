#ifndef BFT_H
#define BFT_H

#include "Traversal.h"
#include "BFT_Iterator.h";
#include <vector>

class BFT : public Traversal{

    BFT_Iterator* concreteIterator(std::vector<FarmUnit*> farmUnit){
        return new BFT_Iterator(farmUnit);
    }
};

#endif