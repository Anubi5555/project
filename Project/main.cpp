#include <iostream>
#include <string>
#include <fstream>
using namespace std;
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

    cout<<"Klasa Grafika";
    Grafika G1(3,5);
    cout << G1.getmin()<<endl;
    G1.ispisi_grafiku();

    cout<<"Klasa Ekran";
    Ekran e(2,5,10,100);
    cout<<e.getosv()<<endl;
    e.povecajosv(120);
    cout<<e.getosv()<<endl;

    cout<<"Klasa Opsis";
    Opsis O(linux,tupe1);
    cout<< O.getbiti();



     /*Funkcionalnost 1:
        Korisnik unosi programe u svoj kompijuter i ima opcije da radi svasta sa njima
       Funkcionalnost 2:
       Korisnik menja komponente ispisuje ih menja bustuje proverava temperaturu sve sto npr radi specy
       program plus bonus metode*/

    return 0;
}
