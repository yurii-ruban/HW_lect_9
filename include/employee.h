#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "abstract_employee.h" 

class Employee : public AbstractEmployee {
public:
    Employee();
    Employee(const std::string& fn, const std::string& ln, const std::string& j);
    virtual void showAll() const;
    virtual void setAll();
};

#endif // EMPLOYEE_H
