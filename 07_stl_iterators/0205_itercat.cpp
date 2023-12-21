#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> coll;

    // insert elements from -3 to 9
    for (int i = -3; i <= 9; ++i) {
        coll.push_back(i);
    }

    /* print number of elements by processing the distance between beginning and end
     * - NOTE: uses operator - for iterators
     */
    cout << "number/distance: " << coll.end() - coll.begin() << endl;

    /* print all elements
     * - NOTE: uses operator < instead of operator !=
     */
    vector<int>::iterator pos;
    for (pos = coll.begin(); pos < coll.end(); ++pos) {
        cout << *pos << ' ';
    }
    cout << endl;

    /* print all elements
     * - NOTE: uses operator [] instead of operator *
     */
    for (unsigned long l = 0; l < coll.size(); ++l) {
        cout << coll.begin()[l] << ' ';
    }
    cout << endl;

    /* print every second element
     * - NOTE: uses operator +=
     */
    for (pos = coll.begin(); pos < coll.end() - 1; pos += 2) {
        cout << *pos << ' ';
    }
    cout << endl;

    return 0;
}
