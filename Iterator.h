#ifndef ITERATOR_H
#define ITERATOR_H

#include <vector>
#include "FarmUnit.h"

class Iterator{

    public:
        virtual FarmUnit* firstFarm(std::vector<FarmUnit*>) = 0;
        virtual void next() = 0;
        virtual bool isDone() = 0;
        virtual FarmUnit* currentFarm() = 0;
};

#endif;