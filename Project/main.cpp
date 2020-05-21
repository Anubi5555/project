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
    int korisnikov_broj;
    do
    {
        cout<<"Kreiranje novog racunara"<<"  "<<"1"<<endl;
        cout<<"Dodavanje memorije"<<"  "<<"2"<<endl;

        cin>>korisnikov_broj;
    }
    while(korisnikov_broj!=0);

    Monitor M;
    M.ispisivanje();

    /*Funkcionalnost 1:
       Korisnik unosi programe u svoj kompijuter i ima opcije da radi svasta sa njima
      Funkcionalnost 2:
      Korisnik menja komponente ispisuje ih menja bustuje proverava temperaturu sve sto npr radi specy
      program plus bonus metode*/
    // Memorija USB(12,2);
    // USB.instaliraj(2,kod,"nesto");
    // USB.citajTxt();
    // Komp K;
    // K.Izvestaj();
    return 0;
}
