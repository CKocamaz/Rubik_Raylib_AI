#include "surface.h"

Surface::Surface(){
    //Constructor
    this->InitSurface();
    this->Print();
}

Surface::~Surface(){
    //Destructor
}

void Surface::InitSurface(){
    //Initialize the surface
    this->surfaceVector.resize(N_OF_SQUARE_ON_SURFACE * N_OF_SURFACES);
    for(int i = 0; i < N_OF_SQUARE_ON_SURFACE * N_OF_SURFACES; i++){
        
        this->surfaceVector[i] = 0;
        
    }
}

void Surface::Print(){
    //Print the surface

    int surfaceIndex = 0;
    const int square_on_surface = ROWS * COLS;
    int surfaceIncrement = 0;
    for(int i = 1; i < N_OF_SQUARE_ON_SURFACE * N_OF_SURFACES + 1; i++){

        if(i % square_on_surface == 0){ //IF N_OF_SQUARE_ON_SURFACE USED. CONDITION ALSO WILL BE PROVIDED AT 3,6,9,12,15,18..
            //std::cout<<i<<std::endl;
            surfaceIncrement = surfaceIndex*N_OF_SQUARE_ON_SURFACE;

            for(int j = 0; j < N_OF_SQUARE_ON_SURFACE; j++){

                std::cout << this->surfaceVector[surfaceIncrement+j] << " ";
            }

            surfaceIndex++;
            std::cout << std::endl;
        }
    }
}