#ifndef OPSIS_HPP_INCLUDED
#define OPSIS_HPP_INCLUDED
#include "Program.hpp"
enum tip {windiws,linux,mac};
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
    biti gettip()const
    {
        return b;
    }


};

#endif // OPSIS_HPP_INCLUDED
