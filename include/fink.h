#ifndef FINK
#define FINK

#include "abstract_employee.h"

class Fink: virtual public AbstractEmployee { // strikebreaker
private:
    std::string reports_to_; // person, who he reports to

protected:
    const std::string reportsTo() const { return reports_to_; }
    void setReportsTo(const std::string head) { reports_to_ = head; }

public:
    Fink();
    Fink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo);
    Fink(const AbstractEmployee& e, const std::string& rpo);
    Fink(const Fink& e);
    virtual void showAll() const override;
    virtual void setAll() override;
};

#endif