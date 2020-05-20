#ifndef EKRAN_HPP_INCLUDED
#define EKRAN_HPP_INCLUDED
#include "Grafika.hpp"
using namespace std;
class Ekran
{
private:
    Grafika G;
    int osvetljenje;
public:
    Ekran(int p=1,int q=3,int r=10,int o=50):G(p,q,r)
    {
        osvetljenje=o;
    }
    int getosv()const
    {
        return osvetljenje;
    }
    int gg()const
    {
        return G.getrez();
    }
    int gm()const
    {
        return G.getmax();
    }
    void setosv(int x)
    {
        osvetljenje=x;
    }
    void sm(int h)
    {
        G.smajnirez(h);
    }
    void pv(int j)
    {
        G.povecajrez(j);
    }
    void povecajosv(int x)
    {
        osvetljenje=osvetljenje+x;
    }
    bool smanjiosv(int x)
    {
        if(osvetljenje-x>=0)
        {
            osvetljenje=osvetljenje-x;
            return 1;
        }
        else
        {
            cout<<"Osvetljenje mora biti vece od nule"<<endl;
            return 5;
        }
    }
    void postaviosvetljenje(int k)
    {
        osvetljenje=k;
    }
     friend ostream&operator<<(ostream&izlaz,const Ekran& E)
    {
        izlaz<<"Ekran - ispis"<<endl;
        izlaz<<E.G<<endl;
        izlaz<<"Osvetljenje je : "<<E.osvetljenje<<endl;
        return izlaz;
    }

};

#endif // EKRAN_HPP_INCLUDED
