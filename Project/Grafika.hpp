#ifndef GRAFIKA_HPP_INCLUDED
#define GRAFIKA_HPP_INCLUDED
#include <iostream>
using namespace std;
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
    void povecajrez(int n)
    {
        if(rez+n>=maxrez)
        {
            rez=rez+n;
        }
        else
        {
            rez=rez;
            cout<<"Previse povecavate rezoluciju"<<endl;
            cout<<"Provetite koliko iznosi najveca rezolucija vase kartice"<<endl;
        }
    }
    void smajnirez(int n)
    {
        if(rez-n>=minrez)
        {
            rez=rez-n;
        }
        else
        {
            rez=rez;
            cout<<"Previse smanjujete rezoluciju"<<endl;
            cout<<"Provetite koliko iznosi najmanja rezolucija vase kartice"<<endl;
        }
    }
    void ispisi_grafiku()
    {
        cout<<"Maksimalna rezolucija vase kartice je:"<<maxrez<<endl;
        cout<<"Trenutna rezolucija vase kartice je:"<<rez<<endl;
        cout<<"Minimalna rezolucija vase kartice je:"<<minrez<<endl;
    }
    void preporuci_pov()
    {
        cout<<"Trenutna rezolucija vase kartice je:"<<rez<<endl;
        cout<<"Maksimalno mozete povecati grafiku za:"<<maxrez-rez<<"vrednosti"<<endl;
    }
     void preporuci_sma()
    {
        cout<<"Trenutna rezolucija vase kartice je:"<<rez<<endl;
        cout<<"Maksimalno mozete smanjiti grafiku za:"<<rez-minrez<<"vrednosti"<<endl;
    }
};
#endif // GRAFIKA_HPP_INCLUDED
