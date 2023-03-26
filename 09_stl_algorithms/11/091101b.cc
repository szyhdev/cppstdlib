#include "algostuff.h"
using namespace std;

int main()
{
    list<int> coll;
    INSERT_ELEMENTS(coll, 1, 6);

    PRINT_ELEMENTS(coll);

    /* process sum of all products
     * (0 + 1*1 + 2*2 + 3*3 + 4*4 + 5*5 + 6*6)
     */
    cout << "inner product: " <<
            inner_product(coll.begin(), coll.end(),  // first range
            coll.begin(),                            // second range
            0) << endl;                              // initial value

    /* process sum of 1*6 ... 6*1
     * (0 + 1*6 + 2*5 + 3*4 + 4*3 + 5*2 + 6*1)
     */
    cout << "inner reverse product: " <<
            inner_product(coll.begin(), coll.end(),  // first range
            coll.rbegin(),                           // second range
            0) << endl;                              // initial value

    /* process product of all sums
     * (1 * 1+1 * 2+2 * 3+3 * 4+4 * 5+5 * 6+6)
     */
    cout << "product of sums: " <<
            inner_product(coll.begin(), coll.end(),  // first range
            coll.begin(),                            // second range
            1,                                       // initial value
            multiplies<int>(),                       // outer operation
            plus<int>()) << endl;                    // inner operation
}
