#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Ekran.hpp"
#include "Memorija.hpp"
#include "Kuler.hpp"
#include "Zvucnici.hpp"
#include "Komp.hpp"
int main()
{

    cout<<"Klasa Memorja";
    Memorija USB(12,2);
    cout << USB.getK() << USB.getP() << endl;
    USB.instaliraj(4);
    cout << USB.getK() << USB.getP() << endl;
    USB.citajTxt();

    cout<<"Klasa Grafika"<<endl;
    Grafika G1(3,5);
    cout << G1.getmin()<<endl;
    G1.ispisi_grafiku();

    cout<<"Klasa Ekran"<<endl;
    Ekran e(2,5,10,100);
    cout<<e.getosv()<<endl;
    e.povecajosv(120);
    cout<<e.getosv()<<endl;

    cout<<"Klasa Monitor"<<endl;
    Monitor M;

    cout<<"Klasa Opsis"<<endl;
    Opsis O(linux,tupe1);
    cout<< O.getbiti();

    cout<<"Klasa Kuler"<<endl;
    Kuler K(150,700);

    cout<<"Klasa Zvucnici"<<endl;
    Zvucnici Z;

    cout<<"Klasa Procesor"<<endl;
    Procesor P;

    cout<<"Klasa Komp"<<endl;
    Komp Kop;
    cout<<"Komp je kreiran"<<endl;



     /*Funkcionalnost 1:
        Korisnik unosi programe u svoj kompijuter i ima opcije da radi svasta sa njima
       Funkcionalnost 2:
       Korisnik menja komponente ispisuje ih menja bustuje proverava temperaturu sve sto npr radi specy
       program plus bonus metode*/

    return 0;
}
