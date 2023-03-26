#include "algostuff.h"
using namespace std;

int main()
{
    vector<int> coll;

    coll.push_back(17);
    coll.push_back(-3);
    coll.push_back(22);
    coll.push_back(13);
    coll.push_back(13);
    coll.push_back(-9);

    PRINT_ELEMENTS(coll, "coll:     ");

    // convert into relative values
    adjacent_difference(coll.begin(), coll.end(),  // source
            coll.begin());                         // destination

    PRINT_ELEMENTS(coll, "relative: ");

    // convert into absolute values
    partial_sum(coll.begin(), coll.end(),  // source
            coll.begin());                 // destination

    PRINT_ELEMENTS(coll, "absolute: ");
}
