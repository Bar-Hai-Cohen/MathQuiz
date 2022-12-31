//
// Created by   bar cohen on 15/12/2022.
//
#include "Exercise.h"

Exercise::Exercise(int min, int max) { //Create the constructor
    if (minValue > maxValue) { // if the min value is bigger than max value create default constructor
        minValue = 0;
        maxValue = 10;
    } else { // else input the value
        minValue = min;
        maxValue = max;
    }
    leftOperand = minValue + (std::rand() % (maxValue - minValue + 1)); //Random the left operand
    rightOperand = minValue + (std::rand() % (maxValue - minValue + 1));//Random the left operand
    op = (std::rand() % (2 - 1 + 1)); //Random the op value or plus or minus
};

int Exercise::eval() { //function that return the eval of the Exercise
    if (getOp() == 0) {
        return leftOperand + rightOperand;
    }
    return leftOperand - rightOperand;
}

std::string Exercise::toString() {//return the string of the expression
    std::string str = "";//Create empty String
    if (op == 0) {
        str = std::to_string(leftOperand) + " + " + std::to_string(rightOperand) + " = "; //add the expression to the str
        return str;
    } else {
        str = std::to_string(leftOperand) + " - " + std::to_string(rightOperand) + " = ";//add the expression to the str
        return str;
    }
}

int Exercise::getOp() const { //Get the op
    return op;
}



