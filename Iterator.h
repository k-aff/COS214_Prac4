#ifndef ITERATOR_H
#define ITERATOR_H

#include "FarmUnit.h"

class Iterator{

    public:
        virtual void firstFarm() = 0;
        virtual void next() = 0;
        virtual bool isDone() = 0;
        virtual FarmUnit* currentFarm() = 0;
};

#endif;