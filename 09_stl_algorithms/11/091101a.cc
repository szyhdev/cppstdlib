#include "algostuff.h"
using namespace std;

int main()
{
    vector<int> coll;
    INSERT_ELEMENTS(coll, 1, 9);

    PRINT_ELEMENTS(coll);

    // process sum of elements
    cout << "sum: " << accumulate(coll.begin(), coll.end(),  // range
            0) << endl;                                      // initial value

    // process sum of elements less 100
    cout << "sum: " << accumulate(coll.begin(), coll.end(),  // range
            -100) << endl;                                   // initial value

    // process product of elements
    cout << "product: " << accumulate(coll.begin(), coll.end(),  // range
            1,                                                   // initial value
            multiplies<int>()) << endl;                          // operation

    // process product of elements (use 0 as initial value)
    cout << "product: " << accumulate(coll.begin(), coll.end(),  // range
            0,                                                   // initial value
            multiplies<int>()) << endl;                          // operation
}
