#include <iostream> // Adds input/output stream for std::cout and std::cin
#include <limits>   // Provides system-specific limits (min/max values) for data types

/* This function lets user enter three numbers
 * then prints those same numbers back into 
 * the terminal*/
int numbers() {
	std::cout << "Enter three numbers: "; // Prints "Enter three numbers"
	int x{}, y{}, z{};                    // Initialization of variables x, y, and z
	std::cin >> x >> y >> z;              // Lets user enter inputs for x, y, and z
	
	// Prints same numbers back into the terminal
	std::cout << "You entered " << x << ", " << y << ", and " << z << '.';
	
	// Resets cin's error state flags
	std::cin.clear();

	// Clears input buffer
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	// Pauses execution, continues after receiving an input
	std::cin.get();
	return 0;
}