#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    vector<int> coll1;
    INSERT_ELEMENTS(coll1, 1, 9);

    /* copy elements of coll1 into coll2
     * - use back inserter to insert instead of overwrite
     */
    list<int> coll2;
    copy(coll1.begin(), coll1.end(),  // source range
            back_inserter(coll2));    // destination range

    /* print elements of coll2
     * - copy elements to cout using an ostream iterator
     */
    copy(coll2.begin(), coll2.end(),            // source range
            ostream_iterator<int>(cout, " "));  // destination range
    cout << endl;

    /* copy elements of coll1 into coll2 in reverse order
     * - now overwriting
     */
    copy(coll1.rbegin(), coll1.rend(),  // source range
            coll2.begin());             // destination range

    // print elements of coll2 again
    copy(coll2.begin(), coll2.end(),            // source range
            ostream_iterator<int>(cout, " "));  // destination range
    cout << endl;

    return 0;
}
