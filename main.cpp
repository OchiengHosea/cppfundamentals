#include <iostream>
#include "Person.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Person p1("Ouma", "Oluoch", 43);
    Person p2("Wekesa", "Bomae", 77);

    std::cout << "P1 is";
    if (!(p1 < p2))
        std::cout << "not";
    std::cout << "Less than p2" << std::endl;
    return 0;
}
