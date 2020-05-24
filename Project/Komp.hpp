#ifndef KOMP_HPP_INCLUDED
#define KOMP_HPP_INCLUDED
#include "Monitor.hpp"
#include "Procesor.hpp"
#include "Kuler.hpp"
#include "Zvucnici.hpp"
#include "Opsis.hpp"
#include "Memorija.hpp"
#include <vector>
vector<string> splitSen(string str)
{
   string w = "";
   vector<string> v;
   for (auto rem : str)
   {
       if (rem==',')
       {
           v.push_back(w);
           w="";
       }
       else
       {
           w=w+rem;
       }
   }
   v.push_back(w);

   return v;
}

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
    Komp(int k1=1,int k2=2,int k3=2,int k4=2,int k5=2,int k6=2,int k7=2,int k8=2,int k9=2,int k10=2,int k11=2,int k12=12,int k13=2,double d1=2,double d2=2,rezim e1=GAMEING,soket e2=AM4,tip e3=linux,biti e4=tupe1,string s1="Windows7"):Mon(e1,k1,k2,k3,k4),Pro(k5,d1,d2,k6,k7,e2),Kul(k8,k9),Zvu(k10,k11),Ops(e3,e4,s1),Mem(k12,k13)
    {
        instalacija(2,kod,s1);
        izfajlauvektor("Programi.txt");
    }
    vector <Program> getsve()const
    {
        return programi;
    }
    void dodaj(Program &P)
    {
        programi.push_back(P);
    }

     void instalacija(int X,kategorija Y,string P)
    {
        if (Mem.getK() >= Mem.getP()+X)
        {
            Mem.setP(Mem.getP()+X);
            Program programcic(X,Y,P);
            dodaj(programcic);
            upisiprograme();
        }
        else if (Mem.getK() <= Mem.getP()+X)
        {
            cout<<"Greska : Nema dovoljno prostora"<<endl;

        }
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
    void upisiprograme()
    {
        for(auto i = programi.begin(); i != programi.end(); i++)
        {
            ofstream fajl;
            fajl.open ("Programi.txt", ios_base::app);
            for(auto i = programi.begin(); i != programi.end(); i++)
            {
                fajl<<*i<<endl;
            }

            fajl.close();

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

void izfajlauvektor(string nazivFajla)
{
    string linija;
    kategorija kat;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            vector<string> rez;
            rez = splitSen(linija);
            if(rez[2]=="igrica"){kat=igrica;}
            else if(rez[2]=="kod"){kat=kod;}
            else if(rez[2]=="aplikacija"){kat=aplikacija;}
            Program o(stoi(rez[1].c_str()),kat,rez[0]);
            programi.push_back(o);
        }

        fajl.close();

    }

    else
        cout << "Neuspesno otvoren fajl";

}

};

#endif // KOMP_HPP_INCLUDED
