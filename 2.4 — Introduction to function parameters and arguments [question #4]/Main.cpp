#include <iostream>
#include <limits>

/* function doubleNumber takes parameter x of type int
 * then returns the double of x to caller*/
int doubleNumber(int x)
{
	return 2 * x; // returns double of integer x to the caller
}

/* function main is the caller as it invokes the function call
 * inside main std::cin lets user input a value for vatiable "integer
 * the variable "integer" is then used as an argument for x inside doubleNubmer()
 * and double of x is returned to std::cout, which prints the result to console*/
int main()
{
	std::cout << "Enter an integer: ";
	int integer{};
	std::cin >> integer;
	std::cout << "Double that number is: " << doubleNumber(integer) << '\n';
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	
	return 0;
}