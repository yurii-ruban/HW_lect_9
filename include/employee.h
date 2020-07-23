#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "abstract_employee.h" 

class Employee : public AbstractEmployee {
public:
    Employee();
    Employee(const std::string& fn, const std::string& ln, const std::string& j);
    virtual void showAll() const override;
    virtual void setAll() override;
};

#endif // EMPLOYEE_H
