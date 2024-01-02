#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    // create a string
    string s("The zip code of Hondelage in Germany is 38108");
    cout << "original: " << s << endl;

    // lowercase all characters
    transform(s.begin(), s.end(),  // source
            s.begin(),             // destination
            ::tolower);            // operation
    cout << "lowered:  " << s << endl;

    // uppercase all characters
    transform(s.begin(), s.end(),  // source
            s.begin(),             // destination
            ::toupper);            // operation
    cout << "uppered:  " << s << endl;

    return 0;
}
