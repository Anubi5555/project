#ifndef ZVUCNICI_HPP_INCLUDED
#define ZVUCNICI_HPP_INCLUDED
#include <string>
using namespace std;
class Zvucnici
{
private:
    int tzvuk;
    int minzvuk;
public:
    void pojacaj(int x)
    {
        tzvuk=tzvuk+x;
    }
    void smanji(int x)
    {
        if(tzvuk-x>0)
        {
            tzvuk=tzvuk-x;
        }
        else
        {
            cout<<"Zvuk mora da bude veci od 0";
        }
    }

};

#endif // ZVUCNICI_HPP_INCLUDED
