#include <iostream>

int getInteger(); // forward declaration of getInteger() function

int main()
{
	int x{ getInteger() }; // Initializes x with the return value of getInteger()
	int y{ getInteger() }; // Initializes y with the return value of getInteger()

	// prints the sum of x and y
	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;

}