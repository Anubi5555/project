#include <iostream>
#include <string>
#include "Memorija.hpp"
#include "Grafika.hpp"
#include "Program.hpp"
#include "Monitor.hpp"
#include "Procesor.hpp"
#include "Kuler.hpp"
#include "Zvucnici.hpp"
#include "Opsis.hpp"
#include "Ekran.hpp"
#include "Komp.hpp"
using namespace std;

int main()
{
    Memorija USB(12,2);
    cout << USB.getK() << USB.getP() << endl;
    USB.instaliraj(4);
    cout << USB.getK() << USB.getP() << endl;

    Grafika G1(3,5);
    cout << G1.getmin()<<endl;
     G1.ispisi_grafiku(G1);

     Ekran e(2,5,10,100);
     cout<<e.getosv()<<endl;
     e.povecajosv(120);
     cout<<e.getosv()<<endl;
    return 0;
}
