//
// Created by   bar cohen on 29/12/2022.
//

#ifndef EXC7_MATHQUIZ_H
#define EXC7_MATHQUIZ_H

#include "ExGeneator.h"

//Create mathQuiz that Encapsulation the ExGenerator class
class MathQuiz {
private:
    ExGenerator *quiz; // create pointer to object
    int correct_answer;

    int getCorrectAnswer() const; //get correct answer
    void setCorrectAnswer(int correctAnswer);

public:
    MathQuiz(int size = 10, int min = 0, int max = 10); //Constructor
    void startQuiz(); // func to start quiz
    ~MathQuiz();// destructor
};


#endif //EXC7_MATHQUIZ_H
