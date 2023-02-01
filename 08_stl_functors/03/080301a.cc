#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include "print.h"
#include "compose11.h"
using namespace std;

int main()
{
    vector<int> coll;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }
    PRINT_ELEMENTS(coll);

    // for each element add 10 and multiply by 5
    transform(coll.begin(),coll.end(),
            ostream_iterator<int>(cout, " "),
            compose_f_gx(bind2nd(multiplies<int>(), 5), bind2nd(plus<int>(), 10)));
    cout << endl;
}

