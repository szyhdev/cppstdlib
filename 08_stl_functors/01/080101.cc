#include <iostream>
#include <string>
#include <deque>
#include <set>
#include <algorithm>
using namespace std;

/* class Person
 */
class Person {
private:
    string fn;  // first name
    string ln;  // last name
public:
    Person() {
    }
    Person(const string &f, const string &l) : fn(f), ln(l) {
    }
    string firstname() const;
    string lastname() const;
    // ...
};

inline string Person::firstname() const {
    return fn;
}

inline string Person::lastname() const {
    return ln;
}

ostream &operator <<(ostream &s, const Person &p)
{
    s << "[" << p.firstname() << " " << p.lastname() << "]";
    return s;
}

/* class for function predicate
 * - operator () returns whether a person is less than another person
 */
class PersonSortCriterion {
public:
    bool operator ()(const Person &p1, const Person &p2) const {
        /* a person is less than another person
         * - if the last name is less
         * - if the last name is equal and the first name is less
         */
        return p1.lastname() < p2.lastname() ||
                (p1.lastname() == p2.lastname() && p1.firstname() < p2.firstname());
    }
};

int main()
{
    Person p1("nicolai", "josuttis");
    Person p2("ulli", "josuttis");
    Person p3("anica", "josuttis");
    Person p4("lucas", "josuttis");
    Person p5("lucas", "otto");
    Person p6("lucas", "arm");
    Person p7("anica", "holle");

    // declare set type with special sorting criterion
    typedef set<Person, PersonSortCriterion> PersonSet;

    // create such a collection
    PersonSet coll;
    coll.insert(p1);
    coll.insert(p2);
    coll.insert(p3);
    coll.insert(p4);
    coll.insert(p5);
    coll.insert(p6);
    coll.insert(p7);

    // do something with the elements
    // - in this case: output them
    cout << "set:" << endl;
    PersonSet::iterator pos;
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        cout << *pos << endl;
    }
}
