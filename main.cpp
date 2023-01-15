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

    /*
     * Const
     * This is a way to commit to the compiler you won't change something
     * Usage:
     *
     * - When declaring a local variable
     * int const zero = 0
     *
     * - As a function parameter
     * int foo(int const i)
     * int something(Person const& p)
     *
     * - Modifier of member function
     * int GetName() const;
     */

    //    Const with indirection

    // A pointer must be a pointer to a particular type

    // Pointers are type safe
    int i,j = 3;
    int* pI = &i;
//    int* pII = &pI; // address of an integer is not of type int
//    pI = &p; you can't assign a different type from the one that was declared


    int const * pcI = pI; // pointer to a constant
//    *pcI = 5; // you can't change the value the pointer points to
    pcI = &j; // You cna change the pointer to point to some other address
    j = *pcI; // You can also read the value it points to

    int * const cpI = pI; // a const pointer
    *cpI = 6; // You can change the value the pointer points to
//    cpI = &j; // You can't change the pointer to have a different address

    int const * const crazy = pI; // const pointer to a const (Doubly const pointer)
    // You can neither change the value the pointer points to nor change the pointer to have a different address
//    *crazy = 5;
//    crazy = &j;
    j = *crazy; // But you can always read the value (dereference)


    return 0;
}
