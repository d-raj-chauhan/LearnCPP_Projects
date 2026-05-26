# [Project Name]

## Description
* This program lets user enter an integer, then prints double and triple of that integer given by the user.
  
This project was built as an exercise for **LearnCPP [Chapter 1, lesson 11 [question #1] aka 1.11**.

## Structure of the program
* Header files[Integer.h]: Just like before, the Integer.h declares function number()
* Source files[Integer.cpp]: This! is the actual program. This lets user enter an integer, then the program prints double and triple of that same integer into the terminal.
* Main files[Main.cpp}: This is the file where execution happens. Integer.h Is declared near the top at Line 2, then in the main function, the function number() is called. The linker then finds the definition of the function number() which is in Integer.cpp, the linker then generates object files for both Main.cpp and Integer.cpp then combines their object files into a single executable file (exe file).

## What I Learned
Working on this project helped me practice:
* [Concept 1, e.g., Basic standard input/output using std::cin and std::cout]
* [Concept 2, e.g., Initializing integer variables]
* [Concept 3, e.g., Writing basic functions]

## How to Compile/Run
This is a standard C++ console application. It can be compiled using any standard C++ compiler (like GCC, Clang, or MSVC).
