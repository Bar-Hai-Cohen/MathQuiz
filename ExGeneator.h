//
// Created by   bar cohen on 29/12/2022.
//

#ifndef EXC7_EXGENEATOR_H
#define EXC7_EXGENEATOR_H

#include "Exercise.h"

//Create the class that represent the quiz ( number of Expression)
class ExGenerator {
private:
    Exercise **exercises;
    int numOfEx;
    int current;

public:
    ExGenerator(int size = 10, int min = 0, int max = 10); //Constructors with default value

    //Getters & Setters
    int getNumOfEx() const;
    int getCurrent() const;
    Exercise *next(); // pop the next the Exercise
    bool endOfEx() const; //End of the quiz
    ~ExGenerator();// destructor

};


#endif //EXC7_EXGENEATOR_H
