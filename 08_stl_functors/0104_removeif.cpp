#include <iostream>
#include <list>
#include <algorithm>

#include "../05_standard_template_library/0700_print.hpp"

using namespace std;

class Nth {  // function object that returns true for the nth call
private:
    int nth;    // call for which to return true
    int count;  // call counter

public:
    Nth(int n) : nth(n), count(0) {
    }

    bool operator ()(int) {
        return ++count == nth;
    }
};

int main()
{
    list<int> coll;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }
    PRINT_ELEMENTS(coll, "coll:           ");

    // remove third element
    list<int>::iterator pos;
    pos = remove_if(coll.begin(), coll.end(),  // range
            Nth(3));                           // remove criterion
    coll.erase(pos, coll.end());

    PRINT_ELEMENTS(coll, "nth(3) removed: ");

    return 0;
}
