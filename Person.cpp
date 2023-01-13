//
// Created by The Duke on 12/12/2022.
//
#include <iostream>;
#include "Person.h"
using namespace std;

Person::Person(std::string firsname, std::string lastname, int arbitrary) {
    cout << "Constructing" << firsname << lastname << endl;
}
