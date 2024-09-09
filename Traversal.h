#ifndef TRAVERSAL_H
#define TRAVERSAL_H

#include "Iterator.h"

class Traversal{
    virtual Iterator* concreteIterator() = 0;
};

#endif