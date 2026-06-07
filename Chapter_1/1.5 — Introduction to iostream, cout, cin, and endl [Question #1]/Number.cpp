#include <iostream> // Adds input/output stream [IO stream]
#include <limits>   // For std::numeric_limits

/* This function lets user
 * enter a number then prints
 * the same number to the console*/
int number() {
	std::cout << "Enter a number: "; // Prints the following text to the terminal
	int x{};                         // Initializes the variable x
	
	// Lets user enter an input for variable x
	std::cin >> x;

	// Prints the number user entered into the terminal
	std::cout << "You entered: " << x << '\n';
	
	// Resets cin's error state flags so it can accept user input again
	std::cin.clear();
	
	// Clears input buffer
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	// Pauses execution, continues after an input
	std::cin.get();
	return 0;
}