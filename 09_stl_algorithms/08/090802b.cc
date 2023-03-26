#include "algostuff.h"
using namespace std;

int main()
{
    set<int> coll;
    INSERT_ELEMENTS(coll, 1, 9);

    PRINT_ELEMENTS(coll, "coll:      ");

    // print elements rotated one element to the left
    set<int>::iterator pos = coll.begin();
    advance(pos, 1);
    cout << "one left:  ";
    rotate_copy(coll.begin(),                   // beginning of source
            pos,                                // new first element
            coll.end(),                         // end of source
            ostream_iterator<int>(cout, " "));  // destination
    cout << endl;

    // print elements rotated two elements to the right
    pos = coll.end();
    advance(pos, -2);
    cout << "two right: ";
    rotate_copy(coll.begin(),                   // beginning of source
            pos,                                // new first element
            coll.end(),                         // end of source
            ostream_iterator<int>(cout, " "));  // destination
    cout << endl;

    // print elements rotated so that element with value 4 is the beginning
    cout << "4 first:   ";
    rotate_copy(coll.begin(),                   // beginning of source
            coll.find(4),                       // new first element
            coll.end(),                         // end of source
            ostream_iterator<int>(cout, " "));  // destination
    cout << endl;
}
