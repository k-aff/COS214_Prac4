#ifndef BFT_ITERATOR_H
#define BFT_ITERATOR_H

#include <queue>
#include "Iterator.h"
#include "FarmUnit.h"

using namespace std;

class BFT_Iterator : public Iterator{

    private:
        vector<FarmUnit*> collection;
        vector<FarmUnit*> visited;
        queue<FarmUnit*> queue;
        FarmUnit* it = *collection.begin();
        int ind ;
        int max;

    public:
        BFT_Iterator(vector<FarmUnit*> farmUnit);
        virtual FarmUnit* firstFarm();
        virtual void next();
        virtual bool isDone();
        virtual FarmUnit* currentFarm();
        virtual ~BFT_Iterator();

};

#endif;