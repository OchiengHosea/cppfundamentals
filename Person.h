//
// Created by The Duke on 12/12/2022.
//

#ifndef FUNDAMENTALS_PERSON_H
#define FUNDAMENTALS_PERSON_H
#include <string>;

class Person {
private:
    std::string firstName;
    std::string lastName;
    int arbitraryNumber;

    Person(std::string firsname, std::string lastname, int arbitrary);
    Person();
    ~Person();
    std::string getName();
};


#endif //FUNDAMENTALS_PERSON_H
