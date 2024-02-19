#include <iostream>

#include "0602_ignore.hpp"

int main()
{
    int i;
    std::cout << "read int and ignore rest of the line" << std::endl;
    std::cin >> i;

    // ignore the rest of the line
    std::cin >> ignoreLine;

    std::cout << "int: " << i << std::endl;

    std::cout << "read int and ignore two lines" << std::endl;
    std::cin >> i;

    // ignore two lines
    std::cin >> ignoreLine >> ignoreLine;

    std::cout << "int: " << i << std::endl;

    return 0;
}
