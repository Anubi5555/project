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
/*Komp kreiranje()
{
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    int niz[12];
    double db1,db2;
    rezim x;
    soket y;
    tip z;
    biti j;
    string naziv;
    cout<<"unos kompijutera"<<endl;
    cout<<"koji je rezim vaseg ekrana"<<endl;
    cout<<"da namestite monitor na mod stednje unesite broj 1"<<endl;
    cout<<"da namestite monitor na gameing mod unesite broj broj 2"<<endl;
    cout<<"da namestite monitor na standardni mod unestire broj 3"<<endl;
    cin>>niz[0];
    switch(niz[0])
    {
     case 1: {x=STEDNJAE;
            break;}
    case 2:{x=GAMEING;
            break;}
    case 3:{x=NORMAL;
            break;}
    }
    cout<<"unesite osvetljenost monitora u intervalu od 1 do 100"<<endl;
    cin>>niz[1];
    niz[2]=1;
    niz[3]=10;
    cout<<"umesite rezoluciju u intervalu od 1 do 10"<<endl;
    cin>>niz[4];
    cout<<"unesite broj jezgara"<<endl;
    cin>>niz[5];
    cout<<"unesite bazni klok"<<endl;
    cin>>db1;
    cout<<"unesite boost klok"<<endl;
    cin>>db2;
    cout<<"unesite dobru temperaturu"<<endl;
    cin>>niz[6];
    cout<<"unesite maksimalnu temperaturu koju vas procesor moze da podnese"<<endl;
    cin>>niz[7];
    int i;
    cout<<"Unesite soket vase maticne ploce"<<endl;
    cout<<"unesite 1 ako imate AM4 soket"<<endl;
    cout<<"unesite 2 ako imate TR4 soket"<<endl;
    cout<<"unesite 3 ako imate intel1 soket"<<endl;
    cout<<"unesite 4 ako imate intel2 soket"<<endl;
    cin>>i;
    switch(i)
    {
        case 1:{y=AM4;
                break;}
        case 2:{y=TR4;
                break;}
        case 3:{y=intel1;
                break;}
        case 4:{y=intel2;
                break;}
    }
    cout<<"unesite brzinu vaseg hladnjaka"<<endl;
    cin>>niz[8];
    cout<<"unesite maksimalnu brzinu vaseg hladnjaka"<<endl;
    cin>>niz[9];
    cout<<"unesite snagu vasih zvucnika"<<endl;
    cin>>niz[10];
    cout<<"unesite maksimalnu snagu vasih zvucnika"<<endl;
    cin>>niz[11];
    int prom1,prom2;
    cout<<"koji je vas operativni sistem"<<endl;
    cout<<"unesite 1 ako je Windows"<<endl;
    cout<<"unesite 2 ako je Linux"<<endl;
    cout<<"unesite 3 ako je Mac"<<endl;
    cin>>prom1;
    switch(prom1)
    {
        case 1:{z=windiws;
                break;}
        case 2:{z=linux;
                break;}
        case 3:{z=mac;
                break;}
    }
    cout<<"koliko bita ima vas OS"<<endl;
    cout<<"unesite 1 ako ima 32 bita"<<endl;
    cout<<"unesite 2 ako ima 64 bita"<<endl;
    cin>>prom2;
    switch(prom2)
    {
        case 1:{j=tupe1;
                break;}
        case 2:{j=tupe2;
                break;}
    }
    cout<<"unesite naziv svog operativnog sistema"<<endl;
    cin>>naziv;
    cout<<"unosite memoriju"<<endl;
    cout<<"unesite koliko memorije ima na disku"<<endl;
    cin>>niz[12];
    cout<<"koliko je od tog kapaciteta popunjeno"<<endl;
    cin>>niz[13];

    return racunar(niz[1],niz[2],niz[3],niz[4],niz[5],niz[6],niz[7],niz[8],niz[9],niz[10],niz[11],niz[12],niz[13],db1,db2,x,y,z,j,naziv);
}*/
void obrisi_program(Komp &KK)
{
    cout<<"UPISITE NAZIV PROGRAMA KOJI ZELITE DA OBRISETE"<<endl;
    *KK.obrisi();
    *KK.upisiprograme();
}
int main()
{
    int korisnikov_broj;

    do
    {
        Komp K;
        cout<<"Kreiranje novog racunara"<<"  "<<"1"<<endl;
        cout<<"Dodavanje memorije"<<"  "<<"2"<<endl;
        cout<<"Upis svih dostupnih programa u fajl Programi.txt"<<"  "<<"3"<<endl;
        cout<<"Brisanje programa"<<"  "<<"4"<<endl;
        cin>>korisnikov_broj;
        switch(korisnikov_broj)
        case 3:
        {
            K.ispisprograma();
        }
        case 4:
        {
           obrisi_program(&K);
        }

    }
    while(korisnikov_broj!=0);

  //  Monitor M;
  //  M.ispisivanje();

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
