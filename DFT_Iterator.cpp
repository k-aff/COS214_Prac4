#include <algorithm>
#include "DFT_Iterator.h"

DFT_Iterator::DFT_Iterator(vector<FarmUnit*> farmUnit){

    collection = farmUnit;
    it =  *collection.begin();
    visited.push_back(it);

    int i=0; 
    while(it->getChild(i)!=nullptr){
        stack.push(it->getChild(i++));
    }
}

FarmUnit* DFT_Iterator::firstFarm(){
    return *(collection.begin());
}

void DFT_Iterator::next() {

    if (!stack.empty()) {
        it = stack.top();
        stack.pop();
    } 
    else if (ind < collection.size()) {
        it = collection[ind++];
    } 
    else {
        return;
    }

    int i = 0;
    FarmUnit* child;
    while ((child = it->getChild(i++)) != nullptr) {
        stack.push(child); // Add child to the stack
    }
}


bool DFT_Iterator::isDone(){

    for (vector<FarmUnit*>::iterator it2 = collection.begin(); it2 != collection.end(); ++it) {

        vector<FarmUnit*>::iterator itt = std::find(collection.begin(), collection.end(), it2);

        if (itt == visited.end()) {
            return false;
        }
    }

    return true;
}

FarmUnit* DFT_Iterator::currentFarm(){
    return it;
}

DFT_Iterator::~DFT_Iterator(){

    for (vector<FarmUnit*>::iterator it2 = collection.begin(); it2 != collection.end(); ++it) {
        delete *it2;
        *it2 = nullptr;
    }

    collection.clear();

    for (vector<FarmUnit*>::iterator it2 = visited.begin(); it2 != visited.end(); ++it) {
        delete *it2;
        *it2 = nullptr;
    }

    visited.clear();

    // for (int i=0; i<queue.size() ; i++) {
    //     FarmUnit* farm = queue.;
    //     it = nullptr;
    // }

    delete it;
    it = nullptr;

}