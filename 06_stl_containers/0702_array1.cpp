#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>

using namespace std;

int main()
{
    int coll[] = { 5, 6, 2, 4, 1, 3 };

    // print all elements
    copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
    cout << endl;

    // square all elements
    transform(coll, coll + 6,    // first source
            coll,                // second source
            coll,                // destination
            multiplies<int>());  // operation

    // print all elements
    copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
    cout << endl;

    // sort beginning with the second element
    sort(coll + 1, coll + 6);

    // print all elements
    copy(coll, coll + 6, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
