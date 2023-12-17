#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#include "0700_print.hpp"

using namespace std;

int square(int value)
{
    return value * value;
}

int main()
{
    set<int> coll1;
    vector<int> coll2;

    // insert elements from 1 to 9 into coll1
    for (int i = 1; i <= 9; ++i) {
        coll1.insert(i);
    }
    PRINT_ELEMENTS(coll1, "initialized: ");

    // transform each element from coll1 to coll2
    // - square transformed values
    transform(coll1.begin(), coll1.end(),  // source
            back_inserter(coll2),          // destination
            square);                            // operation

    PRINT_ELEMENTS(coll2, "squared:     ");

    return 0;
}
