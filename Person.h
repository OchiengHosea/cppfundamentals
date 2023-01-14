//
// Created by The Duke on 12/12/2022.
//

#ifndef FUNDAMENTALS_PERSON_H
#define FUNDAMENTALS_PERSON_H
#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int arbitraryNumber;

    friend bool operator<(int i, Person const& p);

public:
    std::string getName();
    bool operator<(Person const& p) const;
    bool operator<(int) const;
    Person(std::string firstname, std::string lastname, int arbitrary);
    Person();
    ~Person();
};

bool operator<(int i, Person const& p);


#endif //FUNDAMENTALS_PERSON_H
