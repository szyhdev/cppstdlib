#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<string> coll;

    /* read all words from the standard input
     * - source: all strings until end-of-file (or error)
     * - destination: coll (inserting)
     */
    copy(istream_iterator<string>(cin),  // start of source
            istream_iterator<string>(),  // end of source
            back_inserter(coll));        // destination
    cout << endl;

    // sort elements
    sort(coll.begin(), coll.end());

    /* print all elements without duplicates
     * - source: coll
     * - destination: standard output (with newline between elements)
     */
    unique_copy(coll.begin(), coll.end(),           // source
            ostream_iterator<string>(cout, "\n"));  // destination

    return 0;
}
