#include <iostream>
#include <limits>

void writeNumber(int x);

int readNumber(int x, int y)
{
    writeNumber (x + y);
    return 0;
}

void writeNumber(int x)
{
    std::cout << "Sum is: "
    << x << '\n';
}

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