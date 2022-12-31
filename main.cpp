
#include <iostream>
#include "MathQuiz.h"
using namespace std;
int main() {
    cout<<"Welcome to the math quiz"<<endl;
    cout<<"You’ll get 3 exercises"<<endl;
    MathQuiz mq(3,10,30);
    mq.startQuiz();
    return 0;
}
