#include <istream>
#include <limits>

template <class charT, class traits>
inline std::basic_istream<charT, traits> &
ignoreLine(std::basic_istream<charT, traits> &strm)
{
    // skip until end-of-line
    strm.ignore(std::numeric_limits<int>::max(), strm.widen('\n'));

    // return stream for concatenation
    return strm;
}
