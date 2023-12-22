#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    // create ostream iterator for stream cout
    // - values are separated by a newline character
    ostream_iterator<int> intWriter(cout, "\n");

    // write elements with the usual iterator interface
    *intWriter = 42;
    intWriter++;
    *intWriter = 77;
    intWriter++;
    *intWriter = -5;

    // create collection with elements from 1 to 9
    vector<int> coll;
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }

    // write all elements without any delimiter
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout));
    cout << endl;

    // write all elements with " < " as delimiter
    copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " < "));
    cout << endl;

    return 0;
}
