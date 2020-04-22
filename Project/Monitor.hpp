#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED
#include "Grafika.hpp"
enum stanjeMonitora {ON, OFF, TEST, STANDBY};
class Monitor
{
private:
    Ekran e;
    Grafika g;
    stanjeMonitora s;
public:
    Monitor(int x=20)
    {
        s=OFF;
        osvetljenje=x;
    }
    stanjeMonitora getStanje()const
    {
        return s;
    }
    void setstanje(stanjeMonitora x)
    {
        s=x;
    }

} ;


#endif // MONITOR_HPP_INCLUDED
