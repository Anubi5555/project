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
    Memorija(const Memorija &x)
    {
        kapacitet=x.kapacitet;
        popunjeno=x.popunjeno;
    }
    int getK()const
    {
        return kapacitet;
    }
    int getP()const
    {
        return popunjeno;
    }
    void setP(int a)
    {
        popunjeno=a;
    }
     void instaliraj(int X,kategorija Y,string P)
    {
        if (kapacitet >= popunjeno+X)
        {
            popunjeno=popunjeno+X;
            Program novi(X,Y,P);
            string H,M,K;
            M="";
            if(Y==1)
            {
                K="igrica";
            }
            else if (Y==2)
            {
                K="kod";
            }
            else
            {
                K="aplikacija";
            }
            ofstream fajl;
             fajl.open ("Programi.txt", ios_base::app);
            fajl<< P << "," << X << "," << K << endl;
        }
        else if (kapacitet <= popunjeno+X)
        {
            cout<<"Greska : Nema dovoljno prostora"<<endl;

        }
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
    void pisiTxt(char mode='w',string K="NONE")
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
        tekst=K;
        fajl << tekst << endl;
        fajl.close();

    }
    friend ostream&operator<<(ostream&izlaz,const Memorija& M)
    {
        izlaz<<"Kapacitet diska "<<M.kapacitet<<endl;
        izlaz<<"Popunjeno "<<M.popunjeno<<endl;
        return izlaz;
    }
};

#endif // MEMORIJA_HPP_INCLUDED
