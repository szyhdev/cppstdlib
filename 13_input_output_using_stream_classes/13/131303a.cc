#include <iostream>
#include "131303a.hpp"

int main()
{
    outbuf ob;              // create special output buffer
    std::ostream out(&ob);  // initialize output stream with that output buffer

    out << "31 hexadecimal: " << std::hex << 31 << std::endl;
}
