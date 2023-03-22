#include <iostream>
#include <list>
#include <algorithm>
#include "print.h"
using namespace std;

// function object that adds the value with which it is initialized
class AddValue {
private:
    int theValue;  // the value to add
public:
    // constructor initializes the value to add
    AddValue(int v) : theValue(v) {
    }

    // the "function call" for the element adds the value
    void operator ()(int& elem) const {
        elem += theValue;
    }
};

int main()
{
    list<int> coll;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }

    PRINT_ELEMENTS(coll, "initialized:                ");

    // add value 10 to each element
    for_each(coll.begin(), coll.end(),  // range
            AddValue(10));              // operation

    PRINT_ELEMENTS(coll, "after adding 10:            ");

    // add value of first element to each element
    for_each(coll.begin(), coll.end(),  // range
            AddValue(*coll.begin()));   // operation

    PRINT_ELEMENTS(coll, "after adding first element: ");
}
