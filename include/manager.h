#ifndef MANAGER
#define MANAGER

#include "abstract_employee.h"

class Manager : virtual public AbstractEmployee {
private:
    int in_charge_of_; // number of employees manager is in charge of

protected:
    int inChargeOf() const { return in_charge_of_; } // output
    void setInChargeOf(int employees){ in_charge_of_ = employees; } // input

public:
    Manager();
    Manager(const std::string& fn, const std::string& ln,const std::string& j, int ico = 0);
    Manager(const AbstractEmployee& e, int ico);
    Manager(const Manager& m);
    virtual void showAll() const;
    virtual void setAll();
};

#endif