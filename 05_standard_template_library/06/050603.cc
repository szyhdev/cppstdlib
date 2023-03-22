#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    list<int> coll;

    // insert elements from 6 to 1 and 1 to 6
    for (int i = 1; i <= 6; ++i) {
        coll.push_front(i);
        coll.push_back(i);
    }

    // remove all elements with value 3
    // - poor performance
    coll.erase(remove(coll.begin(), coll.end(), 3), coll.end());

    // print all elements of the collection
    copy(coll.begin(), coll.end(),
            ostream_iterator<int>(cout, " "));
    cout << endl;

    // remove all elements with value 4
    // - good performance
    coll.remove(4);

    // print all elements of the collection
    copy(coll.begin(), coll.end(),
            ostream_iterator<int>(cout, " "));
    cout << endl;
}
