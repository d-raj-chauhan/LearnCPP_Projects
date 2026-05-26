#include <iostream> // Gives program access to input/output stream(IO stream).
#include <limits>   // Gives program access to std::numeric_limits.

/*This funciton lets user
 *enter inpur for 2 integers 
 *then gives the
 *addition and subtraction of both integers.*/
int number() {
	std::cout << "Enter an integer: ";   // Prints "Enter an integer: " in terminal
	int firstInteger{}, secondInteger{}; // Initializing the integers
	std::cin >> firstInteger;            // Lets user enter input for firstInteger.

	std::cout << "Enter another integer: "; // Prints "Enter an integer: " in terminal
	std::cin >> secondInteger;              // Lets user enter input for secondInteger.
	
	// Addition of integers.
	std::cout << firstInteger << " + " << secondInteger << " is " << firstInteger + secondInteger << ".\n";
	
	// Subtraction of integers.
	std::cout << firstInteger << " - " << secondInteger << " is " << firstInteger - secondInteger << ".\n";
	
	// Clears stream's error state flags
	std::cin.clear(); 

	// Clears input buffer.
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	//Pauses program's execution, continues after receiving an input
	std::cin.get(); 
	return 0;
}