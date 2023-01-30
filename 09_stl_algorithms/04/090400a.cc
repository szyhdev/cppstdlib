#include "algostuff.h"
using namespace std;

// function called for each element
void print(int elem)
{
    cout << elem << ' ';
}

int main()
{
    vector<int> coll;
    INSERT_ELEMENTS(coll, 1, 9);

    // call print() for each element
    for_each(coll.begin(), coll.end(),  // range
            print);                     // operation
    cout << endl;
}

