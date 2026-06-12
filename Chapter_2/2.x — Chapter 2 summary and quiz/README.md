# Sun of integers

## Description and Structure:
* this file contains solutions for 3 questions.
* inside question #1 a single file program called Main.cpp takes 2 integers from user, then calculates and prints the calculated sum.
* inside question #2 a double file program does the same as Question #1, but the defintions for readNumber() and writeNumber()
 are inside a second file called io.cpp .
* inside question 3, a triple file program does the same as previous ones, only difference is that declarations are contained
inside a 3rd file (a header file)called io.h, then this is #included in main.cpp and io.cpp,
* Why this io.h is included in io.cpp? Answer:- Because it is a best practice to #include paired header files,
   plus! writeNumber() is required to be forward declared inside my io.cpp for readNumber() to work.

## What I learned?
* [Practiced] Concept 1 e.g., Using header files and header guards.
* [New] Concept 2 e.g., Using best practices for eg:- * #including paired header files.
* Using header guards.
* Dividing program into short simple files, then building them one by one, etc.
