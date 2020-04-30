#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED
#include "Ekran.hpp"
enum stanjeMonitora {ON, OFF, TEST, STANDBY};
class Monitor
{
private:
    Ekran e;
    stanjeMonitora s;
public:
    Monitor(int x=20,int k=1,int l=3,int u=10):e(k,l,u,x)
    {
        s=OFF;
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
