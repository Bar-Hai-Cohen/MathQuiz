//
// Created by   bar cohen on 29/12/2022.
//

#include "ExGeneator.h"



int ExGenerator::getNumOfEx() const { //get number of Exercises in the quiz
    return this->numOfEx;
}

int ExGenerator::getCurrent() const { // get current quiz
    return current;
}

ExGenerator::ExGenerator(int size, int min, int max) { // The constructor
    srand(time(nullptr));
    if (size < 0) {
        size = 10;
    }
    this->exercises = new Exercise *[size]; // Create the array  exercises
    for (int i = 0; i < size; ++i) {
        this->exercises[i] = new Exercise(min, max); //Create each exercises
    }
    this->numOfEx = size;
    current = 0;
    //TODO: check if the random gave us the same Exercise what to do
}

Exercise *ExGenerator::next() {
    if (current == numOfEx)
        return nullptr;
    this->current = this->current + 1; // current +1
    return this->exercises[current - 1]; // return the specific exercises
}

bool ExGenerator::endOfEx() const {
    if (this->current == this->numOfEx) // if we get to the end of the array
        return true;
    return false;
}

ExGenerator::~ExGenerator() {
    for (int i = 0; i < this->numOfEx; ++i) {
        delete this->exercises[i]; // Free all the exercises
    }
    delete[] exercises; // free the array

}






