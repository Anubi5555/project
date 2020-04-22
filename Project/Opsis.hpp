#ifndef OPSIS_HPP_INCLUDED
#define OPSIS_HPP_INCLUDED
#include "Program.hpp"
enum tip {windiws,linux,mac};
enum biti {32,64};
class Opsis:public Program
{
private:
    tip t;
    biti b;
public:
    Opsis(x=windiws,y=64):Program(2,kod)
    {
        t=x;
        b=y;

    }


};

#endif // OPSIS_HPP_INCLUDED
