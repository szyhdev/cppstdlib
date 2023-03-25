#include <iostream>
#include <list>
#include <algorithm>
#include "print.h"
using namespace std;

class IntSequence {
private:
    int value;
public:
    // constructor
    IntSequence(int initialValue) : value(initialValue) {
    }

    // "function call"
    int operator ()() {
        return value++;
    }
};

int main()
{
    list<int> coll;

    // insert values from 1 to 9
    generate_n(back_inserter(coll),  // start
            9,                       // number of elements
            IntSequence(1));         // generates values

    PRINT_ELEMENTS(coll);

    // replace second to last element but one with values starting at 42
    generate(++coll.begin(),   // start
            --coll.end(),      // end
            IntSequence(42));  // generates values

    PRINT_ELEMENTS(coll);
}
