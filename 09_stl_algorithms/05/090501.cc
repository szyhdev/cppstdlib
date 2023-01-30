#include "algostuff.h"
using namespace std;

bool isEven(int elem)
{
    return elem % 2 == 0;
}

int main()
{
    vector<int> coll;
    int num;
    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll, "coll: ");

    // count and print elements with value 4
    num = count(coll.begin(), coll.end(),  // range
            4);                            // value
    cout << "number of elements equal to 4:      " << num << endl;

    // count elements with even value
    num = count_if(coll.begin(), coll.end(),    // range
            isEven);                         // criterion
            // not1(bind2nd(modulus<int>(), 2)));  // criterion
    cout << "number of elements with even value: " << num << endl;

    // count elements that are greater than value 4
    num = count_if(coll.begin(), coll.end(),  // range
            bind2nd(greater<int>(), 4));      // criterion
    cout << "number of elements greater than 4:  " << num << endl;
}

