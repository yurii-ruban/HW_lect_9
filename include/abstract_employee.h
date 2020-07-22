#ifndef ABSTRACT_EMPLOYEE
#define ABSTRACT_EMPLOYEE

#include <iostream>
#include <string>

class AbstractEmployee {
private:
    std::string first_name_;
    std::string last_name_;
    std::string job_;

public:
    AbstractEmployee();
    AbstractEmployee(const std::string& fn, const std::string& ln, const std::string& j);
    virtual void showAll() const; // prints all data with names
    virtual void setAll(); // gets data for class fields from user
    friend std::ostream& operator<<(std::ostream& os, const AbstractEmployee& e); // prints first name & last name
    virtual ~AbstractEmployee() = 0;
};

#endif