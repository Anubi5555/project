#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED
#include "Ekran.hpp"
enum stanjeMonitora {ON, OFF, TEST, STANDBY};
enum rezim {STEDNJAE=1,GAMEING,NORMAL};
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
    void optimalanrezim(rezim a)
    {
        switch(a)
        {
            case 1:
                {
                    e.postaviosvetljenje(20);
                    if(e.gg()>5)
                    {
                        e.sm(3);
                    }
                    else if(e.gg()>3)
                    {
                        e.sm(2);
                    }
                }
            case 2:
                {
                    e.postaviosvetljenje(100);
                    e.pv(e.gm());
                }
            case 3:
                {
                    e.postaviosvetljenje(50);
                    e.pv(e.gm()/2);
                }

        }
    }

} ;


#endif // MONITOR_HPP_INCLUDED
