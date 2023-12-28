#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    int c1[] = { 1, 2, 2, 4, 6, 7, 7, 9 };
    int num1 = sizeof(c1) / sizeof(int);

    int c2[] = { 2, 2, 2, 3, 6, 6, 8, 9 };
    int num2 = sizeof(c2) / sizeof(int);

    // print source ranges
    cout << "c1:                         " ;
    copy(c1, c1 + num1, ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "c2:                         " ;
    copy(c2, c2 + num2, ostream_iterator<int>(cout, " "));
    cout << '\n' << endl;

    // sum the ranges by using merge()
    cout << "merge():                    ";
    merge(c1, c1 + num1, c2, c2 + num2, ostream_iterator<int>(cout, " "));
    cout << endl;

    // unite the ranges by using set_union()
    cout << "set_union():                ";
    set_union(c1, c1 + num1, c2, c2 + num2, ostream_iterator<int>(cout, " "));
    cout << endl;

    // intersect the ranges by using set_intersection()
    cout << "set_intersection():         ";
    set_intersection(c1, c1 + num1, c2, c2 + num2, ostream_iterator<int>(cout, " "));
    cout << endl;

    // determine elements of first range without elements of second range
    // by using set_difference()
    cout << "set_difference():           ";
    set_difference(c1, c1 + num1, c2, c2 + num2, ostream_iterator<int>(cout, " "));
    cout << endl;

    // determine difference the ranges with set_symmetric_difference()
    cout << "set_symmetric_difference(): ";
    set_symmetric_difference(c1, c1 + num1, c2, c2+num2, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
