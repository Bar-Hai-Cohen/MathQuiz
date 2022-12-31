cmake_minimum_required(VERSION 3.23)
project(EXC7)

set(CMAKE_CXX_STANDARD 14)

add_executable(EXC7 main.cpp cmake-build-debug/Exercise.h Exercise.cpp Exercise.h ExGeneator.cpp ExGeneator.h MathQuiz.cpp MathQuiz.h)
