#ifndef surface_h
#define surface_h

#include <iostream>
#include "defines.h"

class Surface{

public:
    Surface();
    ~Surface();

    int surfaceArray[ROWS][COLS];

    void InitSurface();
    void Print();
private:


};


#endif