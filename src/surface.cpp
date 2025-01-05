#include "surface.h"

Surface::Surface(){
    //Constructor
    this->InitSurface();
}

Surface::~Surface(){
    //Destructor
}

void Surface::InitSurface(){
    //Initialize the surface
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            this->surfaceArray[i][j] = 0;
        }
    }
}

void Surface::Print(){
    //Print the surface
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            std::cout << this->surfaceArray[i][j] << " ";
        }
        std::cout << std::endl;
    }
}