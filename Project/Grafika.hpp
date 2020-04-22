#ifndef GRAFIKA_HPP_INCLUDED
#define GRAFIKA_HPP_INCLUDED
#include <string>
class Grafika
{
private:
    int minrez;
    int rez;
    int maxrez;
public:
    Grafika (int x=1,int z=3,int y=10)
    {
        minrez=x;
        rez=z;
        maxrez=y;
    }
    int getmin()const
    {
        return minrez;
    }
    int getmax()const
    {
        return maxrez;
    }
    int getrez()const
    {
        return rez;
    }
    void povecajrez()
    {
        if(rez+1>=maxrez)
        {
            rez=rez+1;
        }
        else
        {
            rez=rez;
        }
    }
    void smajnirez()
    {
        if(rez-1>=minrez)
        {
            rez=rez--;
        }
        else
        {
            rez=rez;
        }
    }
};


#endif // GRAFIKA_HPP_INCLUDED
