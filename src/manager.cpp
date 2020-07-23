#include "manager.h"

Manager::Manager(){}

Manager::Manager(const std::string& fn, const std::string& ln,const std::string& j, int ico) : in_charge_of_(ico),
                                                                                               AbstractEmployee(fn, ln, j)
{
}

Manager::Manager(const AbstractEmployee& e, int ico): in_charge_of_(ico),
                                                      AbstractEmployee(e)
{
}

Manager::Manager(const Manager& m): in_charge_of_(m.in_charge_of_),
                                    AbstractEmployee(m)
{
}

void Manager::showAll() const
{
    AbstractEmployee::showAll();
    std::cout << "Number of subordinates: " << in_charge_of_ << std::endl;
}

void Manager::setAll()
{
    AbstractEmployee::setAll();
    std::cout << "Enter number of subordinates: ";
    std::cin >> in_charge_of_;
}
