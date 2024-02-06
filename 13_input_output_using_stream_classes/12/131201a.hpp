#include <iostream>
#include "131200.hpp"

inline std::ostream &operator <<(std::ostream &strm, const Fraction &f)
{
    strm << f.numerator() << '/' << f.denominator();
    return strm;
}
