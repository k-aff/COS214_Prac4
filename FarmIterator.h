#ifndef FARMITERATOR_H
#define FARMITERATOR_H

#include "Iterator.h"
#incldue "FarmUnit.h"

class FarmIterator{

    private:
        FarmUnit* currentFarm;

    public:
        FarmIterator(FarmUnit* farmUnit);
        virtual void firstFarm();
        virtual void next();
        virtual bool isDone();
        virtual FarmUnit* currentFarm();
};

#endif;