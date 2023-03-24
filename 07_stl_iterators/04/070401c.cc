#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void print(int elem)
{
    cout << elem << ' ';
}

int main()
{
    deque<int> coll;

    // insert elements from 1 to 9
    for (int i = 1; i <= 9; ++i) {
        coll.push_back(i);
    }

    // find position of element with value 2
    deque<int>::iterator pos1;
    pos1 = find(coll.begin(), coll.end(),  // range
            2);                            // value

    // find position of element with value 7
    deque<int>::iterator pos2;
    pos2 = find(coll.begin(), coll.end(),  // range
            7);                            // value

    // print all elements in range [pos1,pos2)
    for_each(pos1, pos2,  // range
            print);       // operation
    cout << endl;

    // convert iterators to reverse iterators
    deque<int>::reverse_iterator rpos1(pos1);
    deque<int>::reverse_iterator rpos2(pos2);

    // print all elements in range [pos1,pos2) in reverse order
    for_each(rpos2, rpos1,  // range
            print);         // operation
    cout << endl;
}
