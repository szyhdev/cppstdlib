#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    deque<int> coll;
    INSERT_ELEMENTS(coll, 1, 7);
    INSERT_ELEMENTS(coll, 1, 7);

    PRINT_ELEMENTS(coll, "coll:    ");

    list<int> subcoll;
    INSERT_ELEMENTS(subcoll, 3, 6);

    PRINT_ELEMENTS(subcoll, "subcoll: ");

    // search last occurrence of subcoll in coll
    deque<int>::iterator pos;
    pos = find_end(coll.begin(), coll.end(),  // range
            subcoll.begin(), subcoll.end());  // subrange

    // loop while subcoll found as subrange of coll
    deque<int>::iterator end(coll.end());
    while (pos != end) {
        // print position of first element
        cout << "subcoll found starting with element No. " <<
                distance(coll.begin(), pos) + 1 << endl;

        // search next occurrence of subcoll
        end = pos;
        pos = find_end(coll.begin(), end,         // range
                subcoll.begin(), subcoll.end());  // subrange
    }

    return 0;
}
