#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    deque<int> coll;
    INSERT_ELEMENTS(coll, 1, 9);

    PRINT_ELEMENTS(coll);

    // find four consecutive elements with value 3
    deque<int>::iterator pos;
    pos = search_n(coll.begin(), coll.end(),  // range
            4,                                // count
            3);                               // value

    // print result
    if (pos != coll.end()) {
        cout << "four consecutive elements with value 3 " <<
                "start with No. " << distance(coll.begin(), pos) + 1 <<
                " element" << endl;
    } else {
        cout << "no four consecutive elements with value 3 found" << endl;
    }

    // find four consecutive elements with value greater than 3
    pos = search_n(coll.begin(), coll.end(),  // range
            4,                                // count
            3,                                // value
            greater<int>());                  // criterion

    // print result
    if (pos != coll.end()) {
        cout << "four consecutive elements with value > 3 " <<
                "start with No. " << distance(coll.begin(), pos) + 1 <<
                " element" << endl;
    } else {
        cout << "no four consecutive elements with value > 3 found" << endl;
    }

    return 0;
}
