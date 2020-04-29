#ifndef MEMORIJA_HPP_INCLUDED
#define MEMORIJA_HPP_INCLUDED
#include <string>
using namespace std;
#include "Program.hpp"
class Memorija
{
private:
    int kapacitet;
    int popunjeno;
public:
    Memorija(int x=10,int y=0)
    {
        kapacitet=x;
        popunjeno=y;
    }
    int getK()const
    {
        return kapacitet;
    }
    int getP()const
    {
        return popunjeno;
    }
    void instaliraj(Program Q)
    {
        if (kapacitet >= popunjeno+ Q.getzauzima())
        {
            popunjeno=popunjeno+Q.getzauzima();
        }
        else
        {

        }
    }
    Memorija(const Memorija &x)
    {
        kapacitet=x.kapacitet;
        popunjeno=x.popunjeno;
    }

};


#endif // MEMORIJA_HPP_INCLUDED
