#ifndef EKRAN_HPP_INCLUDED
#define EKRAN_HPP_INCLUDED
#include "Grafika.hpp"
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
    void setosv(int x)
    {
        osvetljenje=x;
    }

};

#endif // EKRAN_HPP_INCLUDED
