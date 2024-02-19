#include <streambuf>
#include <locale>
#include <cstdio>

template <class charT, class traits = std::char_traits<charT> >
class basic_outbuf : public std::basic_streambuf<charT, traits>
{
protected:
    /* central output function
     * - print characters in uppercase mode
     */
    virtual typename traits::int_type overflow(typename traits::int_type c) {
        if (!traits::eq_int_type(c, traits::eof())) {
            // convert lowercase to uppercase
            c = std::toupper(c, std::basic_streambuf<charT, traits>::getloc());

            // and write the character to the standard output
            if (putchar(c) == EOF) {
                return traits::eof();
            }
        }
        return traits::not_eof(c);
    }
};

typedef basic_outbuf<char> outbuf;
typedef basic_outbuf<wchar_t> woutbuf;
