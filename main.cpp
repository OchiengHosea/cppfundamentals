#include <iostream>
#include "Person.h"
#include "Accum.h"

using namespace std;
template<class T>
T Mmax(T const& t1, T const& t2) {
    return t1 < t2 ? t2 : t1;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Person p1("Ouma", "Oluoch", 43);
    Person p2("Wekesa", "Bomae", 77);

    std::cout << "P1 is";
    if (!(p1 < p2))
        std::cout << "not";
    std::cout << "Less than p2" << std::endl;

    cout << "Max of 33 and 34 is " << Mmax(33, 34) << endl;
    string s1 = "hello";
    string s2 = "world";
    cout << "max od " << s1 << " and " << s2 <<
        " is " << Mmax(s1, s2) << endl;

    cout << "Max of " << p1.getName() << " and " << p2.getName() <<
        " is " << Mmax(p1, p2).getName() << endl;

    cout << "\n";

    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << "Accumulated " << integers.GetTotal() << endl;

    Accum<string> names("");
    names += p1.getName();
    names += p2.getName();
    cout << "All the names " << names.GetTotal() << endl;

//    template specialization, for handling unaccounted template operations
//    Person start("", "", 0);
    Accum<Person> people(0);
    people += p1;
    people += p2;
    cout << people.GetTotal() << endl;

    return 0;
}
