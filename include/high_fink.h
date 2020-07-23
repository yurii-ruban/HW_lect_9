#ifndef HIGH_FINK
#define HIGH_FINK

#include "manager.h"
#include "fink.h"

class HighFink: public Manager, public Fink { // fink supervisor
public:
    HighFink();
    HighFink(const std::string& fn, const std::string& ln,const std::string& j, const std::string& rpo, int ico);
    HighFink(const AbstractEmployee& e, const std::string& rpo, int ico);
    HighFink(const Fink& f, int ico);
    HighFink(const Manager& m, const std::string& rpo);
    HighFink(const HighFink& h);
    virtual void showAll() const override;
    virtual void setAll() override;
};

#endif