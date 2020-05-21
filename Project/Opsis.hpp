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
    Opsis(tip x=windiws,biti y=tupe1,string W="Windows 7"):Program(2,kod,W)
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
                break;
            case 2:cout<<"Linux";
                break;
            case 3:cout<<"Mac";
                break;
        }
    }
    void ispis ()
    {
        Program::ispis();
        cout<<"vas operativni sistem je :"<<endl;
        ispisitip();
        cout<<"ima"<<b<<"bita"<<endl;
    }
    string GGet()const
    {
        if (t==1)
            return "Windows";
        else if (t==2)
            return "Linux";
        else if (t==3)
            return "Mac";
    }
       friend ostream&operator<<(ostream&izlaz,const Opsis& O)
    {
        izlaz<<"Operativni sistem - ispis"<<endl;
        izlaz<<"Tip operativnog sistema"<<O.GGet()<<endl;
        izlaz<<"Operativni sistem ima"<<O.getbiti()<<"bita"<<endl;

        return izlaz;
    }

};

#endif // OPSIS_HPP_INCLUDED
