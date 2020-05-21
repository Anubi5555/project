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
    void pisiTxt(string nazivFajla, string tekst, char mode='w')
{
    ofstream fajl;
    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }
    fajl << tekst << endl;
    fajl.close();

}
  /* void Txt(string nazivFajla,auto pok, char mode='w')
{
    ofstream fajl;
    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }
    fajl << *pok << endl;
    fajl.close();

}

    void Izvestaj()
    {
        cout<<"izvestaj racunara"<<endl;
        Txt("izvestaj.txt",&Mon,'a');

    }
*/


};

#endif // KOMP_HPP_INCLUDED
