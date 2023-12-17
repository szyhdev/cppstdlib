#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    list<int> coll1;
    vector<int> coll2;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll1.push_back(i);
    }

    // RUNTIME ERROR:
    // - overwrites nonexisting elements in the destination
    // copy(coll1.begin(), coll1.end(),  // source
    //         coll2.begin());           // destination

    copy(coll1.begin(), coll1.end(),  // source
            back_inserter(coll2));    // destination
    copy(coll2.begin(), coll2.end(),  // source
            ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
