#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "print.h"
#include "compose21.h"
using namespace std;

int main()
{
    vector<int> coll;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }
    PRINT_ELEMENTS(coll);

    // remove all elements that are greater than four and less than seven
    // - retain new end
    vector<int>::iterator pos;
    pos = remove_if(coll.begin(), coll.end(),
            compose_f_gx_hx(logical_and<bool>(),
            bind2nd(greater<int>(), 4), bind2nd(less<int>(), 7)));

    // remove ``removed'' elements in coll
    coll.erase(pos, coll.end());

    PRINT_ELEMENTS(coll);
}

