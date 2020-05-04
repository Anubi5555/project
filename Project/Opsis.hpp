#ifndef OPSIS_HPP_INCLUDED
#define OPSIS_HPP_INCLUDED
#include "Program.hpp"
using namespace std;
enum tip {windiws=1,linux,mac};
enum biti {tupe1=32,tupe2=64};

class Opsis: public Program
{
private:
    tip t;
    biti b;
public:
    Opsis(tip x=windiws,biti y=tupe1):Program(2,kod)
    {
        t=x;
        b=y;

    }
    biti getbiti()const
    {
        return b;
    }
    void ispisitip()const
    {
        switch(t)
        {
            case 1:cout<<"windows";
            case 2:cout<<"Linux";
            case 3:cout<<"Mac";
        }
    }
    void ispisiopsis()
    {
        cout<<"vas operativni sistem je :";
        ispisitip();
        cout<<"ima"<<b<<"bita";
    }

};

#endif // OPSIS_HPP_INCLUDED
