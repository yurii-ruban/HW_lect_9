#include "high_fink.h"
#include "employee.h"
#include <iostream>

template <class T>
void outWrapper(const T& obj)
{
    std::cout << "=====================\n";
    std::cout << "Full info: " << obj << std::endl;
    obj.showAll();
    std::cout << "=====================\n\n";
}

int main() {
    Employee employee("Rick", "Deckard", "Blade runner");
    outWrapper(employee);

    Manager manager("Harry", "Bryant", "Captain", 5);
    outWrapper(manager);

    Fink fink("Leon", "Kowalski", "Cargo loader", "Roy Batty");
    outWrapper(fink);

    HighFink highFink(manager, "Eduardo Gaff");
    outWrapper(highFink);

    HighFink highFink_jr;
    highFink_jr = highFink;
    outWrapper(highFink_jr);

    std::cout << "Press a key for next phase:" << std::endl;
    std::cin.get();

    HighFink highFink2;
    highFink2.setAll();

    std::cout << "\nUsing an AbstractEmployee * pointer:" << std::endl;
    AbstractEmployee* tri[4] = { &employee, &fink, &highFink, &highFink2};
    for (auto i = 0; i < 4; i++) {
        outWrapper(*tri[i]);
    }
    return 0;
}
