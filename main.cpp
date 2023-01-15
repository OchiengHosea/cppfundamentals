#include <iostream>
#include "Person.h"

using namespace std;

int main() {
    int a = 3;
    cout << "a is " << a << endl;

    int& rA = a;
    rA = 5;
    cout << "a is now" << a << endl;

    Person p = Person("Gorry", "Burt", 3);
    Person& rP = p;
    rP.SetNumber(434);
    cout << "rP: " << rP.getName()  << " " << rP.GetNumber() << endl;

    cout << "\n+++++++++++++++++\n";
    int* pA = &a;
    *pA = 4;
    cout << "a is " << a << endl;
    int b = 100;
    pA = &b;
    (*pA)++;
    cout << "a " << a << ", *pA " << *pA << endl;


    cout << "\n+++++++++++++++++\n";

    Person* pP = &p;
    (*pP).SetNumber(544);
    pP->SetNumber(345);
    cout << "rP: " << rP.getName() << " " << rP.GetNumber() << endl; // when talking to an object, use the dot
    cout << "pP: " << pP->getName() << " " << pP->GetNumber() << endl; // when talking to a pointer, use the points to

    // references must be initialized, and cannot be initialized to null
    // pointers must also be initialized but can be initialized to be nullptr

    return 0;
}
