#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    // fill both collections with some sorted elements
    list<int> coll1;
    INSERT_ELEMENTS(coll1, 1, 6);

    set<int> coll2;
    INSERT_ELEMENTS(coll2, 3, 8);

    PRINT_ELEMENTS(coll1, "coll1:  ");

    PRINT_ELEMENTS(coll2, "coll2:  ");

    // print merged sequence
    cout << "merged: ";
    merge(coll1.begin(), coll1.end(),
            coll2.begin(), coll2.end(),
            ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
