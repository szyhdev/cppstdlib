#include <iostream>

int main()
{
    // copy all standard input to standard output
    std::cout << std::cin.rdbuf();

    return 0;
}
