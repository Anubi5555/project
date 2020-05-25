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

bool prazanFajl(string nazivFajla)
{
    ifstream fajl(nazivFajla);
    string c;
    fajl >> c;
    if(c.empty())
        return true;
    else
        return false;
}

class Komp
{
public:
    Monitor Mon;
    Procesor Pro;
    Kuler Kul;
    Zvucnici Zvu;
    Opsis Ops;
    vector  <Memorija> particije;
    vector <Program> programi;
public:
    Komp(int H,int k1=1,int k2=2,int k3=2,int k4=2,int k5=2,int k6=2,int k7=2,int k8=2,int k9=2,int k10=2,int k11=2,double d1=2,double d2=2,rezim e1=GAMEING,soket e2=AM4,tip e3=linux,biti e4=tupe1,string s1="Windows7"):Mon(e1,k1,k2,k3,k4),Pro(k5,d1,d2,k6,k7,e2),Kul(k8,k9),Zvu(k10,k11),Ops(H,e3,e4,s1)
    {
        if(!prazanFajl("Programi.txt")) izfajlauvektor("Programi.txt");
        if(!prazanFajl("Particija1.txt")) izfajlauvektor("Particija1.txt");
        if(!prazanFajl("Particija2.txt")) izfajlauvektor("Particija2.txt");
        particije.resize(3);
        instalacija(2,kod,s1,'w',H-1);
    }
    Komp(const Komp &K):Mon(K.Mon),Pro(K.Pro),Kul(K.Kul),Zvu(K.Zvu),Ops(K.Ops)
    {

    }
    string getimeo()const
    {
        return Ops.getimeop();
    }

    void dodaj(Program &P)
    {
        programi.push_back(P);
    }
    void instalacija(int X,kategorija Y,string P, char mode,int a)
    {

        particije.at(a).setP(particije.at(a).getP()+X);
        Program programcic(a,X,Y,P);
        string nazivfajla;
        dodaj(programcic);
        if(a==0)
            nazivfajla="Programi.txt";
        else if(a==1)
            nazivfajla="Particija1.txt";
        else
            nazivfajla="Particija2.txt";
        if(mode== 'a')
        {
            upisiprograme(nazivfajla,'a');
        }
        else
        {
            upisiprograme(nazivfajla);
        }
    }
    void izbaci(string line="")
    {
        fflush(stdin);
        for(auto i = programi.begin(); i != programi.end(); i++)
            if (i -> getIme() == line)
            {
                programi.erase(i);
                return;
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
    void obrisimem()
    {
        string line;
        fflush(stdin);
        getline(cin,line);
        for(auto i = particije.begin(); i != particije.end(); i++)
            for(auto o = programi.begin(); o != programi.end(); o++)
            {
                if (o -> getIme() == line)
                {
                    programi.erase(o);
                    cout << line << " je obrisan" << endl;
                    return;
                }
                cout << line << " nije obrisan" << endl;
            }
    }
    void ispisprograma()
    {
        for(auto i = programi.begin(); i != programi.end(); i++)
            cout<<*i<<endl;
    }
    void ispisprogramamem()
    {
        for(auto i = particije.begin(); i != particije.end(); i++)
            cout<<*i<<endl;
    }
    void pretraga()
    {
        string line;
        fflush(stdin);
        getline(cin,line);
        for(auto i = particije.begin(); i != particije.end(); i++)
        {

            for(auto o = programi.begin(); o != programi.end(); o++)
            {
                if (o -> getIme() == line)
                {
                    cout << *o << endl;
                }
            }

        }
    }
    void upisiprograme(string nazivFajla,char mode='w')
    {
        int O;
        if(nazivFajla=="Programi.txt")
        {
            O=0;
        }
        else if (nazivFajla=="Particija1.txt")
        {
            O=1;
        }
        else if (nazivFajla=="Particija2.txt")
        {
            O=2;
        }
        else
        {
            O=3;
        }
        ofstream fajl;
        if (mode=='a' && !prazanFajl(nazivFajla))
        {
            fajl.open (nazivFajla, ios_base::app);
        }
        else
        {
            fajl.open (nazivFajla);
        }
        for(auto i = programi.begin(); i != programi.end(); i++)
        {
            if(i->getpart()==O || O==3)
            {
                fajl<<*i<<endl;
            }

        }

        fajl.close();

    }
    void upisibassve()
    {
        upisiprograme("Programi.txt");
        upisiprograme("Particija1.txt");
        upisiprograme("Particija2.txt");
    }
    void Txtss(string nazivFajla,int pok, char mode='w')
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
        if(pok==1)
            fajl << Mon<< endl;
        else if(pok==2)
            fajl << Pro<< endl;
        else if(pok==3)
            fajl << Kul<< endl;
        else if(pok==4)
            fajl << Zvu<<endl;
        else if(pok==5)
            fajl <<Ops<< endl;
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
        for(i=1; i<7; i++)
            Txtss("Izvestaj.txt",i,'a');
        pisiTxte('a',"Dostupni programi su :");
        upisiprograme("Izvestaj.txt",'a');
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
                int V;
                rez = splitSen(linija);
                if(rez[2]=="igrica")
                {
                    kat=igrica;
                }
                else if(rez[2]=="kod")
                {
                    kat=kod;
                }
                else if(rez[2]=="aplikacija")
                {
                    kat=aplikacija;
                }
                if(nazivFajla=="Programi.txt")
                {
                    V=0;
                }
                else if (nazivFajla=="Particija1.txt")
                {
                    V=1;
                }
                else
                {
                    V=2;
                }
                Program o(V,stoi(rez[1].c_str()),kat,rez[0]);
                programi.push_back(o);
            }

            fajl.close();

        }

        else
            cout << "Neuspesno otvoren fajl";

    }
};

#endif // KOMP_HPP_INCLUDED
