#include "0300_algostuff.hpp"

using namespace std;

int main()
{
    list<int> coll;
    INSERT_ELEMENTS(coll, 1, 9);

    PRINT_ELEMENTS(coll, "coll:   ");

    vector<int> search;
    search.push_back(3);
    search.push_back(4);
    search.push_back(7);
    PRINT_ELEMENTS(search, "search: ");

    // check whether all elements in search are also in coll
    if (includes(coll.begin(), coll.end(),
            search.begin(), search.end())) {
        cout << "all elements of search are also in coll" << endl;
    } else {
        cout << "not all elements of search are also in coll" << endl;
    }

    return 0;
}
