#ifndef surface_h
#define surface_h

#include <iostream>
#include "defines.h"
#include "randomize.h"
#include <vector>
class Surface{

public:
    Surface();
    ~Surface();
;
    std::vector<int> surfaceVector;

    void InitSurface();
    void Print();

private:

    //Randomize randomizer;

};


#endif