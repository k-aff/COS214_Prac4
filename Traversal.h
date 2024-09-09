#ifndef TRAVERSAL_H
#define TRAVERSAL_H

#include <vector>
#include "Iterator.h"

class Traversal{
    virtual Iterator* concreteIterator(vector<FarmUnit*> farmUnit) = 0;
};

#endif