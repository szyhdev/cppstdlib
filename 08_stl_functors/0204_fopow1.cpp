#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// include self-defined fopow<>
#include "0204_fopow.hpp"

int main()
{
    vector<int> coll;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }

    // print 3 raised to the power of all elements
    transform(coll.begin(), coll.end(),          // source
            ostream_iterator<float>(cout, " "),  // destination
            bind1st(fopow<float, int>(), 3));    // operation
    cout << endl;

    // print all elements raised to the power of 3
    transform(coll.begin(), coll.end(),          // source
            ostream_iterator<float>(cout, " "),  // destination
            bind2nd(fopow<float, int>(), 3));    // operation
    cout << endl;

    return 0;
}
