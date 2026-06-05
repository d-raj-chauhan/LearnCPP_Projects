#include <iostream> // compiler doesn't compiler main.cpp and input.cpp together, so we need iostream here too 

int getInteger()
{
	std::cout << "Enter an integer: ";
	int x{};       // initializing variable x
	std::cin >> x; // waits for an input
	return x;      // returns x back to caller
}