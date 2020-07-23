#include "fink.h"

Fink::Fink(){}

Fink::Fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo): reports_to_(rpo),
                                                                                                        AbstractEmployee(fn, ln, j)
{
}

Fink::Fink(const AbstractEmployee& e, const std::string& rpo): reports_to_(rpo),
                                                               AbstractEmployee(e)
{
}

Fink::Fink(const Fink& e): reports_to_(e.reports_to_),
                           AbstractEmployee(e)
{    
}

void Fink::showAll() const
{
    AbstractEmployee::showAll();
    std::cout << "Reports to: " << reports_to_ << std::endl;
}

void Fink::setAll()
{
    AbstractEmployee::setAll();
    std::cout << "Enter the name of the direct manager: ";
    std::cin >> reports_to_;
}