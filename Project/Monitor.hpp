#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED
#include "Ekran.hpp"
enum stanjeMonitora {ON=1, OFF, TEST, STANDBY};
enum rezim {STEDNJAE=1,GAMEING,NORMAL};
class Monitor
{
private:
    Ekran e;
    stanjeMonitora s;
    rezim R;
public:
    Monitor(rezim ff=NORMAL,int x=20,int k=1,int l=3,int u=10):e(k,l,u,x)
    {
        s=OFF;
        R=ff;
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
    void stanje1 ()
    {
        switch(s)
        {
        case 1:cout<<"ON"<<endl; break;
        case 2:cout<<"OFF"<<endl; break;
        case 3:cout<<"TEST"<<endl; break;
        case 4:cout<<"STANDBY"<<endl; break;
        }
    }
    void rezim1 ()
    {
        switch(R)
        {
        case 1:cout<<"Rezim stednje"<<endl; break;
        case 2:cout<<"Gameing rezim"<<endl; break;
        case 3:cout<<"Standardni rezim"<<endl; break;
        }
    }
    string Sget()const
    {
        if(s==1)
            return "ON";
        else if (s==2)
            return "OFF";
        else if (s==3)
            return "TEST";
        else if (s==4)
            return "STANDBY";
    }
    string Rget()const
    {
        if(R==1)
            return "Rezim stednje";
        else if (R==2)
            return "Gameing rezim";
        else if (R==3)
            return "Standardni rezim";
    }
    void ispisivanje()
    {
      cout<<"Monitor - ispis"<<endl;
      cout<<e;
      cout<<"Stanje monitora je : ";
      stanje1();
      cout<<"Rezim monitora je : ";
      rezim1();
    }
       friend ostream&operator<<(ostream&izlaz,const Monitor& M)
    {
        izlaz<<"Monitor - ispis"<<endl;
        izlaz<<"Ekran ovog monitora "<<M.e<<endl;
        izlaz<<"stanje monitora je "<<M.Sget()<<endl;
        izlaz<<"Rezim monitora je"<<M.Rget()<<endl;

        return izlaz;
    }

} ;


#endif // MONITOR_HPP_INCLUDED
