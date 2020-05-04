#ifndef PROGRAM_HPP_INCLUDED
#define PROGRAM_HPP_INCLUDED
#include "Memorija.hpp"
#include <stdlib.h>
enum kategorija {igrica,kod,aplikacija};

class Program
{
protected:
    string naziv;
    int zauzima;
    kategorija k;
public:
    Program(int x=1,kategorija y=kod,string p="unnamed")
    {
        zauzima=x;
        k=y;
        naziv=p;
    }
    int getzauzima()const
    {
        return zauzima;
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

#endif // PROGRAM_HPP_INCLUDED
