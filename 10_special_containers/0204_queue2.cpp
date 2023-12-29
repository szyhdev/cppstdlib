#include <iostream>
#include <string>

#include "0204_queue.hpp"  // use special queue class

using namespace std;

int main()
{
    try {
        Queue<string> q;

        // insert three elements into the queue
        q.push("These ");
        q.push("are ");
        q.push("more than ");

        // read and print two elements from the queue
        cout << q.pop();
        cout << q.pop();
        cout << endl;

        // push two new elements
        q.push("four ");
        q.push("words!");

        // skip one element
        q.pop();

        // read and print two elements from the queue
        cout << q.pop();
        cout << q.pop() << endl;
        cout << endl;

        // print number of remaining elements
        cout << "number of elements in the queue: " << q.size() << endl;

        // read and print one element
        cout << q.pop() << endl;
    }
    catch (const exception& e) {
        cerr << "EXCEPTION: " << e.what() << endl;
    }

    return 0;
}
