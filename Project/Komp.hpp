#ifndef KOMP_HPP_INCLUDED
#define KOMP_HPP_INCLUDED
#include "Monitor.hpp"
#include "Procesor.hpp"
#include "Kuler.hpp"
#include "Zvucnici.hpp"
#include "Opsis.hpp"
#include "Memorija.hpp"
#include <vector>
class Komp
{
public:
    Monitor Mon;
    Procesor Pro;
    Kuler Kul;
    Zvucnici Zvu;
    Opsis Ops;
    Memorija Mem;
    vector <Program> programi;
public:
    Komp():Mon(),Pro(),Kul(),Zvu(),Ops(),Mem()
    {

    }
    void dodaj(Program &Q)
    {
        programi.push_back(Q);
    }
    void obrisi()
    {
        string line;
        fflush(stdin);
        getline(cin,line);
        for(auto i = programi.begin(); i != programi.end(); i++)
           if (i -> getIme() == line)
            {
                programi.erase(i);
                cout << line << " je obrisan" << endl;
                return;
            }
        cout << line << " nije obrisan" << endl;
    }
    void ispisprograma()
    {
         for(auto i = programi.begin(); i != programi.end(); i++)
            cout<<*i;
    }
    void pretraga()
    {
         string line;
        fflush(stdin);
        getline(cin,line);
        for(auto i = programi.begin(); i != programi.end(); i++)
           if (i -> getIme() == line)
            {
                cout << *i << endl;
            }
    }
     void pisiText(char mode='w',string a="NONE")
    {
        ofstream fajl;
        if (mode=='a')
        {
            fajl.open ("Izvestaj.txt", ios_base::app);
        }
        else
        {
            fajl.open ("Izvestaj.txt");
        }
        string tekst;
        tekst=a;
        fajl << tekst << endl;
        fajl.close();

    }
  //  void izvestaj ()
 //   {
  //      pisiText('a',Mon);

  //  }



};

#endif // KOMP_HPP_INCLUDED
