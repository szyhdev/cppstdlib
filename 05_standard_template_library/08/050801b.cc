#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include "print.h"

int square(int value)
{
    return value * value;
}

int main()
{
    std::set<int> coll1;
    std::vector<int> coll2;

    // insert elements from 1 to 9 into coll1
    for (int i = 1; i <= 9; ++i) {
        coll1.insert(i);
    }
    PRINT_ELEMENTS(coll1, "initialized: ");

    // transform each element from coll1 to coll2
    // - square transformed values
    std::transform(coll1.begin(), coll1.end(),  // source
            std::back_inserter(coll2),          // destination
            square);                            // operation

    PRINT_ELEMENTS(coll2, "squared:     ");
}
