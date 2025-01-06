#ifndef surface_h
#define surface_h

#include <iostream>
#include "defines.h"
#include "randomize.h"
#include <vector>

class Surface{

public:
    Surface();      //Add state to the input...
    Surface(int i); //Add state to the input...
    ~Surface();

    std::vector<int> allSurfaceVector;
    std::vector<int> oneSurfaceVector;

    void InitSurface();
    void Print();

private:

    Randomize randomizer;

};


#endif