# Programs with muliple files

## Description
* In this program inside Main.cpp, variables x and y are brace initialized and inside those braces function getInteger() is invoked.
* getInteger() is inside input.cpp file, this getIntege() asks user to enter an integer which assign's user's input to previously defined variable x and x is then returned back to caller using return keyword.
* The caller(main()) uses the return values to initialize x and y then prints the sum of x and y to the console.

This project was built as an exercise for LearnCPP [Chapter 2, lesson 8 [question #1] aka 2.8.

## Structure of the program
* This program is divided into two cpp files:-
* [Main.cpp]:- This file contains two variables named x and y, which are brace-initialized with the return values of getInteger().
* [input.cpp]:- This file contains getInteger() function, which first defines variable x using brace intialization the waits for user to give an input, assigns input to x then returns x back to caller.

## What I learned
* [New] Concept 1 e.g., dividing program into smaller code files for organization and reusability purposes.
* [New] Concept 2 e.g., [Best Practice]:- whenever creating new code files for your project, give them a .cpp extension.
* [New] Concept 3 e.g., Using forward declarations, and definitions.

## How to Compile/Run
* This is a standard C++ console application. It can be compiled using any standard C++ compiler (like GCC, Clang, or MSVC).
