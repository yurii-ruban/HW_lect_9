#include "employee.h"

Employee::Employee(){}

Employee::Employee(const std::string& fn, const std::string& ln, const std::string& j) : AbstractEmployee(fn, ln, j)
{
}

void Employee::showAll() const
{
    AbstractEmployee::showAll();
}

void Employee::setAll()
{
    AbstractEmployee::setAll();
}