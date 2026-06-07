#include <iostream> // For input and output stream
#include <limits>   // For std::numeric_limits

int number() {
	std::cout << "Enter an integer: "; // Prints text in the terminal
	int num{};                         // initializes variable num
	std::cin >> num;                   // Waits for input then moves given input to variable num
	
	// Prints double of the variable
	std::cout << "Double that number is: " << 2 * num;
	
	// Prints triple of the variable
	std::cout << "\nTriple that number is: " << 3 * num << '\n';
	
	//Clears stream's error state flags
	std::cin.clear();

	// Clears input buffer
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	std::cin.get(); // Pauses program's execution, continues after receiving an input
	return 0;
}