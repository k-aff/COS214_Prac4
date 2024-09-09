#ifndef DFT_ITERATOR_H
#define DFT_ITERATOR_H

#include <stack>
#include "Iterator.h"
#include "FarmUnit.h"

using namespace std;

class DFT_Iterator : public Iterator{

    private:
        vector<FarmUnit*> collection;
        vector<FarmUnit*> visited;
        stack<FarmUnit*> stack;
        FarmUnit *it = *collection.begin();
        int ind = 0;

    public:
        DFT_Iterator(vector<FarmUnit*> farmUnit);
        virtual FarmUnit* firstFarm();
        virtual void next();
        virtual bool isDone();
        virtual FarmUnit* currentFarm();
        virtual ~DFT_Iterator();
};

#endif;