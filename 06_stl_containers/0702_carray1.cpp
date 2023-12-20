#include <algorithm>
#include <functional>

#include "../05_standard_template_library/0700_print.hpp"
#include "0702_carray.hpp"

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

    return 0;
}
