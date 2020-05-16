#ifndef MEMORIJA_HPP_INCLUDED
#define MEMORIJA_HPP_INCLUDED
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
    void instaliraj(int X,kategorija Y,string P)
    {
        if (kapacitet >= popunjeno+X)
        {
            popunjeno=popunjeno+X;
            Program novi(X,Y,P);
             pisiTxt('a');
        }
        else (kapacitet <= popunjeno+X)
        ;{
            cout<<"Greska-Nema dovoljno prostora"<<endl;

        }
    }
    Memorija(const Memorija &x)
    {
        kapacitet=x.kapacitet;
        popunjeno=x.popunjeno;
    }
void citajTxt()
    {
        string linija;
        ifstream fajl ("Programi.txt");
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
              cout<<linija<<endl;
            }
            fajl.close();

        }

        else
            cout << "Neuspesno otvoren fajl";
    }
    void pisiTxt(char mode='w')
    {
        ofstream fajl;
        if (mode=='a')
        {
            fajl.open ("Programi.txt", ios_base::app);
        }
        else
        {
            fajl.open ("Programi.txt");
        }
        string tekst;
        cin>>tekst;
        fajl << tekst << endl;
        fajl.close();

    }
};

#endif // MEMORIJA_HPP_INCLUDED
