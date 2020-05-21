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
   void Txt(string nazivFajla,int pok, char mode='w')
{
    ofstream fajl;
    if (mode=='a'){
        fajl.open ("Izvestaj.txt", ios_base::app);
    }else{
        fajl.open ("Izvestaj.txt");
    }
    if(pok==1)
        fajl << Mon<< endl;
    else if(pok==2)
        fajl << Pro<< endl;
    else if(pok==3)
        fajl << Kul<< endl;
    else if(pok==4)
        fajl <<Ops<< endl;
    else if(pok==5)
        fajl <<Mem<< endl;
     fajl.close();
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

    void Izvestaj()
    {
        pisiTxt('w',"izvestaj kompijutera");
        int i;
        for(i=1;i<6;i++)
            Txt("Izvestaj.txt",i,'w');
        pisiTxt('w',"Dostupni programi su :");
        ispisprograma();
    }



};

#endif // KOMP_HPP_INCLUDED
