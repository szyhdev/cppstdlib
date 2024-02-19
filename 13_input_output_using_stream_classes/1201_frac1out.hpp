#include <iostream>

#include "1200_frac.hpp"

inline std::ostream &operator <<(std::ostream &strm, const Fraction &f)
{
    strm << f.numerator() << '/' << f.denominator();
    return strm;
}
