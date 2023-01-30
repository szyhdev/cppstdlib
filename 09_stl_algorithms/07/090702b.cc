#include "algostuff.h"
using namespace std;

bool differenceOne(int elem1, int elem2)
{
    return elem1 + 1 == elem2 || elem1 - 1 == elem2;
}

int main()
{
    // source data
    int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4 };
    int sourceNum = sizeof(source) / sizeof(source[0]);

    // initialize coll with elements from source
    list<int> coll;
    copy(source, source+sourceNum,  // source
            back_inserter(coll));   // destination
    PRINT_ELEMENTS(coll);

    // print elements with consecutive duplicates removed
    unique_copy(coll.begin(), coll.end(),       // source
            ostream_iterator<int>(cout, " "));  // destination
    cout << endl;

    // print elements without consecutive entries that differ by one
    unique_copy(coll.begin(), coll.end(),      // source
            ostream_iterator<int>(cout, " "),  // destination
            differenceOne);                    // duplicates criterion
    cout << endl;
}

