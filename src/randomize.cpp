#include "randomize.h"

Randomize::Randomize(){
    //Constructor
   
    this->InitColorPool();
    //this->PrintColorPool();
    this->ShuffleColorPool();
}

Randomize::~Randomize(){
    //Destructor
}

void Randomize::InitColorPool(){
    //Initialize the color pool
    this->colorPoolVector.resize(N_OF_SURFACES*N_OF_SQUARE_ON_SURFACE);
    for(int i = 0; i < N_OF_SURFACES; i++){
        for(int j = 0; j < N_OF_SQUARE_ON_SURFACE; j++){
            this->colorPoolVector[i*N_OF_SQUARE_ON_SURFACE + j] = colors[i];
        }
    }

}
void Randomize::PrintColorPool(){
    //Print the color pool
    for(int i = 0; i < N_OF_SURFACES; i++){
        for(int j = 0; j < N_OF_SQUARE_ON_SURFACE; j++){
            std::cout << to_string(this->colorPoolVector[i*N_OF_SQUARE_ON_SURFACE + j]) << " ";
        }
        std::cout << std::endl;
    }

}

void Randomize::ShuffleColorPool(){

    std::vector<MyColor> tempColorVector(N_OF_SURFACES*N_OF_SQUARE_ON_SURFACE);
    std::random_device rd;

    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, N_OF_SURFACES*N_OF_SQUARE_ON_SURFACE - 1);

    int randomNumber[N_OF_SURFACES*N_OF_SQUARE_ON_SURFACE - 1];
    int tempIndex = 0;
    for(int i = 0; i<N_OF_SURFACES*N_OF_SQUARE_ON_SURFACE; i++){

        std::uniform_int_distribution<> distrib(0, (N_OF_SURFACES*N_OF_SQUARE_ON_SURFACE) - i);
        int randomIndex = distrib(gen);
        std::cout << "Random number: " << randomIndex << std::endl;
        tempColorVector[tempIndex] = this->colorPoolVector[randomIndex];
        this->colorPoolVector.erase(this->colorPoolVector.begin() + randomIndex);
        tempIndex++;
    }

    this->colorPoolVector = tempColorVector;
    this->PrintColorPool();
}