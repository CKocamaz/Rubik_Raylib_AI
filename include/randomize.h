#ifndef RANDOMIZE_H
#define RANDOMIZE_H
#include "defines.h"
#include <array>
#include <iostream>
#include <random>
#include <vector>

enum class MyColor{
    MyRED,
    MyGREEN,
    MyBLUE,
    MyYELLOW,
    MyORANGE,
    MyWHITE
};

//Compile time operation to create an array of colors, vectors are not able to use as a constexpr
constexpr std::array<MyColor, 6> colors = {
    MyColor::MyRED,
    MyColor::MyGREEN,
    MyColor::MyBLUE,
    MyColor::MyYELLOW,
    MyColor::MyORANGE,
    MyColor::MyWHITE
};

// Function to convert Color to a string (optional for printing)
constexpr const char* to_string(MyColor color) {
    switch (color) {
        case MyColor::MyRED:    return "MyRED";
        case MyColor::MyGREEN:  return "MyGREEN";
        case MyColor::MyBLUE:   return "MyBLUE";
        case MyColor::MyYELLOW: return "MyYELLOW";
        case MyColor::MyORANGE: return "MyORANGE";
        case MyColor::MyWHITE:  return "MyWHITE";
        default:            return "UNKNOWN";
    }
}

class Randomize{
public:
    Randomize();
    ~Randomize();

    void randomizeColor();
    std::vector<MyColor> colorPoolVector;
    MyColor colorPool[N_OF_SURFACES*N_OF_SQUARE_ON_SURFACE];
    void PrintColorPool();

private:
    void InitColorPool();
    void ShuffleColorPool();

};


#endif
