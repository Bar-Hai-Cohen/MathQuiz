//
// Created by   bar cohen on 29/12/2022.
//ID:209499284
//

//include library

#include "MathQuiz.h"
#include <iostream>
#include <fstream>
#include <random>

MathQuiz::MathQuiz(int size, int min, int max) { // create the Constructor
    quiz = new ExGenerator(size, min, max); // create the quiz and point to the object
    this->correct_answer = 0;
}

//Getters

int MathQuiz::getCorrectAnswer() const {
    return correct_answer;
}

void MathQuiz::setCorrectAnswer(int correctAnswer) {
    correct_answer = correctAnswer;
}

// Start the quiz
void MathQuiz::startQuiz() {
    int answer;
    string quizStr;
    quizStr += "Results for the quiz:\n"; // add to the string the get into the file
    while (!quiz->endOfEx()) { // while not all the question and continue
        Exercise *question = quiz->next(); // get the next question
        cout << question->toString(); // output the question on the screen
        quizStr += question->toString() + to_string(question->eval()) +
                   " your answer "; // add to the string the get into the file
        cin >> answer;
        quizStr += to_string(answer) + "\n";
        if (answer == question->eval()) { // if the answer is correct
            printf("correct\n");
            this->setCorrectAnswer(this->getCorrectAnswer() + 1); // plus one to the good answer
        } else {
            printf("wrong\n");
        }
    }
    quizStr +=
            "You got " + to_string(this->correct_answer) + " correct answers out of " + to_string(quiz->getNumOfEx()) +
            " exercises.";
    printf("Your test is over!\n");
    printf("The quiz has ended.You were right in %d out of %d questions\n", this->correct_answer, quiz->getNumOfEx());
    printf("Would you like to save the results? (press y or n)");
    char let;
    cin >> let;
    if (let == 'y') {
        string nameFile;
        printf("please enter file path:");
        cin >> nameFile;

        //Random three numbers
        int random1 = std::rand() % 10;
        int random2 = std::rand() % 10;
        int random3 = std::rand() % 10;

        string randNum = to_string(random1) + to_string(random2) + to_string(random3); // to string to the number
        if (nameFile[nameFile.length() - 1] != '\\') {
            nameFile += '\\';
        }
        //cout << "the path is:\n" + nameFile;
        string path = nameFile + "result" + randNum + ".txt"; // create the path

        // Create and open a text file

        //ofstream MyFile("/Users/barcohen/Downloads/result544.txt");
        ofstream MyFile(path);
        if (!MyFile) {
            cout << "Error the file wae not create!";
            exit(1);
        }

        // Write to the file
        MyFile << quizStr;
        // Close the file
        MyFile.close();
        cout << "Your results where saved in " + path + "\n";
        printf("Goodbye!");

    } else {
        printf("Goodbye!");
    }

}

MathQuiz::~MathQuiz() {
    delete quiz; // free the array
}

