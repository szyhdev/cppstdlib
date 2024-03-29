#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    vector<int> coll;
    vector<int>::iterator pos;
    INSERT_ELEMENTS(coll, 1, 9);

    PRINT_ELEMENTS(coll, "coll: ");

    // find first element greater than 3
    pos = find_if(coll.begin(), coll.end(),  // range
            bind2nd(greater<int>(), 3));     // criterion

    // print its position
    cout << "the No. " << distance(coll.begin(), pos) + 1 <<
            " element is the first greater than 3" << endl;

    // find first element divisible by 3
    pos = find_if(coll.begin(), coll.end(),
            not1(bind2nd(modulus<int>(), 3)));

    // print its position
    cout << "the No. " << distance(coll.begin(), pos) + 1 <<
            " element is the first divisible by 3" << endl;

    return 0;
}
