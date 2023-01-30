#include "algostuff.h"
using namespace std;

int main()
{
    vector<int> coll;
    INSERT_ELEMENTS(coll, 1, 6);

    PRINT_ELEMENTS(coll);

    // print all partial sums
    partial_sum(coll.begin(), coll.end(),       // source range
            ostream_iterator<int>(cout, " "));  // destination
    cout << endl;

    // print all partial products
    partial_sum(coll.begin(), coll.end(),     // source range
            ostream_iterator<int>(cout," "),  // destination
            multiplies<int>());               // operation
    cout << endl;
}

