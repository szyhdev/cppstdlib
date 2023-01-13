#include <algorithm>
#include <functional>
#include "carray.h"
#include "print.h"
using namespace std;

int main()
{
    carray<int, 10> a;

    for (unsigned i = 0; i < a.size(); ++i) {
        a[i] = i + 1;
    }
    PRINT_ELEMENTS(a);

    reverse(a.begin(),a.end());
    PRINT_ELEMENTS(a);

    transform(a.begin(), a.end(),  // source
            a.begin(),             // destination
            negate<int>());        // operation
    PRINT_ELEMENTS(a);
}

