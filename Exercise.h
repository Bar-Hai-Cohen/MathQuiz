//
// Created by   bar cohen on 15/12/2022.
//

#ifndef EXC7_EXERCISE_H
#define EXC7_EXERCISE_H

//include library
#include <random>
#include <string>
#include <time.h>
#include <iostream>

using namespace std;

//Create class that represent the expression
class Exercise {
private:
    int leftOperand;// the left operand in the expression
    int rightOperand;// the right operand in the expression
    int op;//Exercise mark type
    int maxValue;//The max boundary of the numbers
    int minValue;//The min boundary of the numbers
public:

    Exercise(int min = 0, int max = 10);//Constructors with default value

    int getOp() const;//Get the op
    int eval() const; //Method that return the result of the exercise
    std::string toString() const; //To string to print the exercise

};

#endif //EXC7_EXERCISE_H
