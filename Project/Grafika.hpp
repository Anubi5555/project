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
    void ispisi_grafiku(Grafika G)
    {
        cout<<"Maksimalna rezolucija vase kartice je:"<<G.getmax()<<endl;
        cout<<"Trenutna rezolucija vase kartice je:"<<G.getrez()<<endl;
        cout<<"Minimalna rezolucija vase kartice je:"<<G.getmin()<<endl;
    }
    void preporuci_pov(Grafika G)
    {
        cout<<"Trenutna rezolucija vase kartice je:"<<G.getrez()<<endl;
        cout<<"Maksimalno mozete povecati grafiku za:"<<G.getmax()-G.getrez()<<"vrednosti"<<endl;
    }
     void preporuci_sma(Grafika G)
    {
        cout<<"Trenutna rezolucija vase kartice je:"<<G.getrez()<<endl;
        cout<<"Maksimalno mozete smanjiti grafiku za:"<<G.getmin()-G.getmin()<<"vrednosti"<<endl;
    }
};
#endif // GRAFIKA_HPP_INCLUDED
