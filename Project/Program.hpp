#ifndef PROGRAM_HPP_INCLUDED
#define PROGRAM_HPP_INCLUDED
#include "Memorija.hpp"
#include <stdlib.h>
enum kategorija {igrica=1,kod,aplikacija};

class Program
{
protected:
    string naziv;
    int zauzima;
    kategorija k;
    int gde;
    static int broj;
public:
    Program(int gdesam,int x=1,kategorija y=kod,string p="unnamed")
    {
        zauzima=x;
        k=y;
        naziv=p;
        broj++;
        gde=gdesam;
    }
    Program(const Program &x2)
    {
        naziv=x2.naziv;
        zauzima=x2.zauzima;
        k=x2.k;
        broj++;
        gde=x2.gde;
    }
    ~Program()
    {
        broj--;
    }
    int getpart()const
    {
        return gde;
    }
    string getIme()const
    {
        return naziv;
    }
    int getzauzima()const
    {
        return zauzima;
    }
    int getbroj()const
    {
        return broj;
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
    void kat()
    {
        if (k==igrica)
        {
            cout<<"igrica";
        }
        else if (k==kod)
        {
            cout<<"kod";
        }
        else
        {
            cout<<"aplikacija";
        }
    }
    virtual void ispis ()
    {
        cout<<"naziv programa je : "<<naziv<<endl;
        cout<<"program zauzima je  : "<<zauzima<<endl;
        cout<<"katrgorija progrma je : ";
        kat();
        cout<<endl;
    }
    string odredi()const
    {
        string L="";
        switch(k)
        {
        case 1:L="igrica";
              break;
        case 2:L="kod";
              break;
        case 3:L="aplikacija";
              break;
        }
        return L;
    }
    friend ostream&operator<<(ostream&izlaz,const Program& p)
    {
        izlaz<<p.naziv;
        izlaz<<",";
        izlaz<<p.zauzima;
        izlaz<<",";
        izlaz<<p.odredi();
        return izlaz;
    }



};


#endif // PROGRAM_HPP_INCLUDED
