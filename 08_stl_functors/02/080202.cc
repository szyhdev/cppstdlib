#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

class Person {
private:
    std::string name;
public:
    Person() {
    }
    Person(const std::string& n) : name(n) {
    }
    //...
    void print() const {
        std::cout << name << std::endl;
    }
    void printWithPrefix(std::string prefix) const {
        std::cout << prefix << name << std::endl;
    }
};

void foo(const std::vector<Person>& coll)
{
    using std::for_each;
    using std::bind2nd;
    using std::mem_fun_ref;

    // call member function print() for each element
    for_each(coll.begin(), coll.end(),
            mem_fun_ref(&Person::print));

    // call member function printWithPrefix() for each element
    // - "person: " is passed as an argument to the member function
    for_each(coll.begin(), coll.end(),
            bind2nd(mem_fun_ref(&Person::printWithPrefix), "person: "));
}

void ptrfoo(const std::vector<Person*>& coll)  // ^^^ pointer !
{
    using std::for_each;
    using std::bind2nd;
    using std::mem_fun;

    // call member function print() for each referred object
    for_each(coll.begin(), coll.end(),
            mem_fun(&Person::print));

    // call member function printWithPrefix() for each referred object
    // - "person: " is passed as an argument to the member function
    for_each(coll.begin(), coll.end(),
            bind2nd(mem_fun(&Person::printWithPrefix), "person: "));
}

int main()
{
    std::vector<Person> coll;

    Person p1("nicolai");
    Person p2("ulli");
    Person p3("anica");

    coll.push_back(p1);
    coll.push_back(p2);
    coll.push_back(p3);

    foo(coll);
    std::cout << std::endl;

    std::vector<Person*> coll2;

    coll2.push_back(new Person("nicolai"));
    coll2.push_back(new Person("ulli"));
    coll2.push_back(new Person("anica"));

    ptrfoo(coll2);

    for (auto p: coll2) {
        delete p;
    }
}

