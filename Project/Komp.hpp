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
    Komp(int k1,int k2,int k3,int k4,int k5,int k6,int k7,int k8,int k9,int k10,int k11,int k12,int k13,double d1,double d2,rezim e1,soket e2,tip e3,biti e4,string s1):Mon(e1,k1,k2,k3,k4),Pro(k5,d1,d2,k6,k7,e2),Kul(k8,k9),Zvu(k10,k11),Ops(e3,e4,s1),Mem(k12,k13)
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
   void Txtss(string nazivFajla,int pok, char mode='w')
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
 void pisiTxte(char mode='w',string K="NONE")
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
        tekst=K;
        fajl << tekst << endl;
        fajl.close();

    }
    void Izvestaj()
    {
       pisiTxte('w',"izvestaj kompijutera");
       int i;
       for(i=1;i<6;i++)
            Txtss("Izvestaj.txt",i,'a');
       pisiTxte('a',"Dostupni programi su :");
       // ispisprograma();
    }
void citaajTxt()
    {
        string linija;
        ifstream fajl ("Izvestaj.txt");
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


};

#endif // KOMP_HPP_INCLUDED
