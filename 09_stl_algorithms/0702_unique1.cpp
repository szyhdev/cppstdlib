#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    // source data
    int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4 };
    int sourceNum = sizeof(source) / sizeof(source[0]);

    list<int> coll;

    // initialize coll with elements from source
    copy(source, source + sourceNum,  // source
            back_inserter(coll));     // destination
    PRINT_ELEMENTS(coll);

    // remove consecutive duplicates
    list<int>::iterator pos;
    pos = unique(coll.begin(), coll.end());

    /* print elements not removed
     * - use new logical end
     */
    copy(coll.begin(), pos,                     // source
            ostream_iterator<int>(cout, " "));  // destination
    cout << "\n\n";

    // reinitialize coll with elements from source
    copy(source, source + sourceNum,  // source
            coll.begin());            // destination
    PRINT_ELEMENTS(coll);

    // remove elements if there was a previous greater element
    coll.erase(unique(coll.begin(), coll.end(), greater<int>()),
            coll.end());
    PRINT_ELEMENTS(coll);

    return 0;
}
