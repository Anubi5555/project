#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Ekran.hpp"
#include "Memorija.hpp"
#include "Kuler.hpp"
#include "Zvucnici.hpp"
#include "Komp.hpp"
#include "Program.hpp"
int Program::broj=0;
int main()
{
  /*  int I;
    cin>>I;
    switch(I)
    {
        case 0:break;
    }

    cout<<"Klasa Grafika"<<endl;
    Grafika G1(3,5);
    cout << G1.getmin()<<endl;
    G1.ispisi_grafiku();

    cout<<"Klasa Ekran"<<endl;
    Ekran e(2,5,10,100);
    cout<<e.getosv()<<endl;
    e.povecajosv(120);
    cout<<e.getosv()<<endl;
    Monitor M;
    cout<<"Klasa Monitor"<<endl;
    Opsis O(linux,tupe1);

    Program p(5,kod,"nesto"),p1(2,kod,"nesto drugo"),p2;
      Program *P=&O;
      p.ispis();
    //cout<<"Klasa Opsis"<<endl;

    //cout<< O.getbiti()<<endl;
      P->ispis();

  /*  cout<<"Klasa Kuler"<<endl;
    Kuler K(150,700);

    cout<<"Klasa Zvucnici"<<endl;
    Zvucnici Z;
    cout<<Z;

    cout<<"Klasa Procesor"<<endl;
    Procesor P;
    cout<<P;

    cout<<"Klasa Komp"<<endl;
    Komp Kop;
    cout<<"Komp je kreiran"<<endl;

    cout<<"Klasa Program"<<endl;
    cout<<endl<<endl<<endl;
   // cout<<p;
  //  cout<<p.getbroj()<<endl;

     cout<<"Klasa Komp"<<endl;
    Komp Kop;
    cout<<"Komp je kreiran"<<endl;
    Kop.dodaj(p);
    Kop.dodaj(p1);
    Kop.dodaj(p2);
    Kop.ispisprograma();
    Kop.obrisi();
    Kop.ispisprograma();
    Kop.pretraga();

  /*  cout<<"Klasa Memorja"<<endl;






Monitor M;
   M.ispisivanje();

     /*Funkcionalnost 1:
        Korisnik unosi programe u svoj kompijuter i ima opcije da radi svasta sa njima
       Funkcionalnost 2:
       Korisnik menja komponente ispisuje ih menja bustuje proverava temperaturu sve sto npr radi specy
       program plus bonus metode*/
    Memorija USB(12,2);
    cout << USB.getK() <<" "<< USB.getP() << endl;
    USB.instaliraj(2,kod,"nesto");
     cout << USB.getK() <<" "<< USB.getP() << endl;
 USB.citajTxt();
    Komp K;
    K.Izvestaj();
    return 0;
}
