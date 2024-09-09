// #include <algorithm>
// #include "BFT_Iterator.h"

// BFT_Iterator::BFT_Iterator(vector<FarmUnit*> farmUnit){
//     collection = farmUnit;
//     it =  *collection.begin();
//     max = 0;
// }

// FarmUnit* BFT_Iterator::firstFarm(){
//     return *(collection.begin());
// }

// void BFT_Iterator::next(){

//     if(!que.empty()){
//         it = que.front();
//         que.pop();
//     }
//     else if (ind < collection.size()) {
//         it = collection[ind++];
//     } 
//     else {
//         return;
//     }

//     vector<FarmUnit*>::iterator itt;

//     for (vector<FarmUnit*>::iterator it2 = collection.begin(); it2 != collection.end(); ++it) {

//         int size = (*it2)->getTotalCapacity();

//         if (it2 != visited.end()) {
//             if(size>max){
//                 itt = it2;
//             }
//         }
//     }

//     que.push(*itt);

//     // int i = 0;
//     // while(it->getChild(i)!=nullptr){
//     //     queue.push(it->getChild(i++));
//     // }
// }

// bool BFT_Iterator::isDone(){

//     for (vector<FarmUnit*>::iterator it2 = collection.begin(); it2 != collection.end(); ++it) {
//         vector<FarmUnit*>::iterator itt = std::find(collection.begin(), collection.end(), it2);

//         if (itt == visited.end()) {
//             return false;
//         }
//     }

//     return true;
// }

// FarmUnit* BFT_Iterator::currentFarm(){
//     return it;
// }

// BFT_Iterator::~BFT_Iterator(){

//     for (vector<FarmUnit*>::iterator it2 = collection.begin(); it2 != collection.end(); ++it) {
//         delete *it2;
//         *it2 = nullptr;
//     }

//     collection.clear();

//     for (vector<FarmUnit*>::iterator it2 = visited.begin(); it2 != visited.end(); ++it) {
//         delete *it2;
//         *it2 = nullptr;
//     }

//     visited.clear();

//     // for (int i=0; i<queue.size() ; i++) {
//     //     FarmUnit* farm = queue.;
//     //     it = nullptr;
//     // }

//     delete it;
//     it = nullptr;

// }