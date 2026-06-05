# Parameters and Arguments

## Description
* This program reads an integer from user and stores it in a variable named "integer" then that variable is used as an argument for parameter x inside doubleNumber(), which then returns the double of x to main() and the result is printed into console using std::cout.

This project was built as an exercise for **LearnCPP [Chapter 2, lesson 4 [question #4 and #5] aka 2.4**.

## Structure of the program
* This program consists of only one file:-
* [Main.cpp]:- 1. In main() variable "integer" is brace initialized, value for "integer" is extraced using std::cin >> integer;.
  2. In the next statement doubleNumber() called in std::cout << "Double that number is: " << doubleNumber(integer) << '\n' at line 20, "integer" is used as an argument for parameter x of doubleNumber().
  3. doubleNumber() is defined near the top and it consists of one parameter named x of type int.
  4. return value of doubleNumber() is printed on console using std::cout.

## What I learned
* [New] Concept 1 e.g., What Parameters are, how they work and how to use them.
* [New} Concept 2 e.g., Arguments, how they function, how to assign parameters using arguments etc.
* [New] Concept 3 e.g., Unreferenced parameters and Unnamed parameters.
* [New] Concept 4 e.g., [Best practice]:- Dont't name a unreferenced parameter but you can optionally put a name using comments to document what the parameter does.

## How to Compile/Run
This is a standard C++ console application. It can be compiled using any standard C++ compiler (like GCC, Clang, or MSVC).
