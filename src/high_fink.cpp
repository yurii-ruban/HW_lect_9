#include "high_fink.h"

HighFink::HighFink() {}

HighFink::HighFink(const std::string& fn, const std::string& ln,const std::string& j, const std::string& rpo, int ico): Manager(fn, ln, j, ico),
                                                                                                                        Fink(fn, ln, j, rpo),
                                                                                                                        AbstractEmployee(fn, ln, j)
{
}

HighFink::HighFink(const AbstractEmployee& e, const std::string& rpo, int ico): Manager(e, ico),
                                                                                Fink(e, rpo),
                                                                                AbstractEmployee(e)
{
}

HighFink::HighFink(const Fink& f, int ico): Manager(f, ico),
                                            Fink(f),
                                            AbstractEmployee(f)
{
}

HighFink::HighFink(const Manager& m, const std::string& rpo): Manager(m),
                                                              Fink(m, rpo),
                                                              AbstractEmployee(m)
{
}

HighFink::HighFink(const HighFink& h): Manager(h),
                                       Fink(h),
                                       AbstractEmployee(h)
{
}

void HighFink::showAll() const
{
    Manager::showAll();
    std::cout << "Reports to: " << Fink::reportsTo() << std::endl;
}

void HighFink::setAll()
{
    Manager::setAll();

    std::string head;
    std::cout << "Enter the direct manager: ";
    std::cin >> head;
    Fink::setReportsTo(head);
}