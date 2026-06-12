#include "io.h"
#include <iostream>

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
