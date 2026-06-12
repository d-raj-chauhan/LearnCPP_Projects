#include "io.h"
#include <iostream>
#include <limits>

int main()
{
    std::cout << "Enter two integers: ";
    
    int x{}, y{};
    std::cin >> x >> y;
    
    readNumber(x,y);
    std::cin.get();
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    return 0;
}
