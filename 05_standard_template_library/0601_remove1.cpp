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

    // print all elements of the collection
    cout << "pre:  ";
    copy(coll.begin(), coll.end(),              // source
            ostream_iterator<int>(cout, " "));  // destination
    cout << endl;

    // remove all elements with value 3
    remove(coll.begin(), coll.end(),  // range
            3);                       // value

    // print all elements of the collection
    cout << "post: ";
    copy(coll.begin(), coll.end(),              // source
            ostream_iterator<int>(cout, " "));  // destination
    cout << endl;

    return 0;
}
