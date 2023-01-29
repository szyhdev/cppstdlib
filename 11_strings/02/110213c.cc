#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // create constant string
    const string hello("Hello, how are you?");

    // initialize string s with all characters of string hello
    string s(hello.begin(), hello.end());

    // iterate through all of the characters
    string::iterator pos;
    for (pos = s.begin(); pos != s.end(); ++pos) {
        cout << *pos;
    }
    cout << endl;

    // reverse the order of all characters inside the string
    reverse(s.begin(), s.end());
    cout << "reverse:       " << s << endl;

    // sort all characters inside the string
    sort(s.begin(), s.end());
    cout << "ordered:       " << s << endl;

    /* remove adjacent duplicates
     * - unique() reorders and returns new end
     * - erase() shrinks accordingly
     */
    s.erase(unique(s.begin(), s.end()),
            s.end());
    cout << "no duplicates: " << s << endl;
}

