//
// Created by The Duke on 12/12/2022.
//
#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(std::string firstname, std::string lastname, int arbitrary) {
    cout << "Constructing" << firstname << lastname << endl;
    lastName = lastname;
    firstName = firstname;
}

std::string Person::getName() {
    return firstName + " " + lastName;
}

// comparing two persons like p1 < p2
bool Person::operator<(const Person &p) const {
    return arbitraryNumber < p.arbitraryNumber;
}

// comparing person and int
bool Person::operator<(int i) const {
    return arbitraryNumber < i;
}

Person::~Person() {
    cout << "Finished with "+ getName() << endl;
}

// comparing integer and person

bool operator<(int i, Person const& p){
    return i < p.arbitraryNumber;
}

int Person::GetNumber() const {
    return arbitraryNumber;
}
