#include <iostream>
#include <set>
#include <algorithm>

#include "../05_standard_template_library/0700_print.hpp"
#include "0502_assoiter.hpp"

using namespace std;

int main()
{
    set<int> coll;

    // create inserter for coll
    // - inconvenient way
    asso_insert_iterator<set<int> > iter(coll);

    // insert elements with the usual iterator interface
    *iter = 1;
    iter++;
    *iter = 2;
    iter++;
    *iter = 3;
    PRINT_ELEMENTS(coll);

    // create inserter for coll and insert elements
    // - convenient way
    asso_inserter(coll) = 44;
    asso_inserter(coll) = 55;
    PRINT_ELEMENTS(coll);

    // use inserter with an algorithm
    int vals[] = { 33, 67, -4, 13, 5, 2 };
    copy(vals, vals + (sizeof(vals) / sizeof(vals[0])),  // source
            asso_inserter(coll));                        // destination
    PRINT_ELEMENTS(coll);

    return 0;
}
