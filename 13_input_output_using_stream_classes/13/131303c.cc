#include <iostream>
#include "131303c.hpp"

int main()
{
    fdostream out(1);  // stream with buffer writing to file descriptor 1

    out << "31 hexadecimal: " << std::hex << 31 << std::endl;
}
