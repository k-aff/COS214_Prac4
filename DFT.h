#ifndef DFT_H
#define DFT_H

#include "Traversal.h"
#include "DFT_Iterator.h"

class DFT : public Traversal {
    Iterator* concreteIterator(vector<FarmUnit*> farmUnit){
        return new DFT_Iterator(farmUnit);
    }
};

#endif