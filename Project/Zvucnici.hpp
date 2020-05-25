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
    Zvucnici(int u=12,int i=50)
    {
        tzvuk=u;
        minzvuk=i;
    }
    Zvucnici(const Zvucnici &F)
    {
        tzvuk=F.tzvuk;
        minzvuk=F.minzvuk;
    }
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
   friend ostream&operator<<(ostream&izlaz,const Zvucnici& z)
    {
        izlaz<<"minimalna snaga zvucnika je :"<<z.minzvuk<<endl;
        izlaz<<"Zvucnici su na:"<<z.tzvuk<<endl;

        return izlaz;
    }


};

#endif // ZVUCNICI_HPP_INCLUDED
