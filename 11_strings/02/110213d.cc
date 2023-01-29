#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <locale>
using namespace std;

class bothWhiteSpaces {
private:
    const locale& loc;  // locale
public:
    /* constructor
     * - save the locale object
     */
    bothWhiteSpaces(const locale& l) : loc(l) {
    }
    /* function call
     * - returns whether both characters are whitespaces
     */
    bool operator ()(char elem1, char elem2) {
        return isspace(elem1, loc) && isspace(elem2, loc);
    }
};

int main()
{
    string contents;

    // don't skip leading whitespaces
    cin.unsetf(ios::skipws);

    // read all characters while compressing whitespaces
    unique_copy(istream_iterator<char>(cin),  // beginning of source
            istream_iterator<char>(),         // end of source
            back_inserter(contents),          // destination
            bothWhiteSpaces(cin.getloc()));   // criterion for removing

    // process contents
    // - here: write it to the standard output
    cout << contents;
}

