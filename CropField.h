#ifndef CROPFIELD_H
#define CROPFIELD_H

#include "FarmUnit.h"

class CropField : public FarmUnit
{
    public:
        CropField(string typeOfCrop, int capacity, SoilState* soilState);

};

#endif;