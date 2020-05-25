#ifndef KULER_HPP_INCLUDED
#define KULER_HPP_INCLUDED
#include "Procesor.hpp"
class Kuler
{
private:
    int obicnabrzina;
    int maxbrzina;
public:
    Kuler(int x=100,int y=500)
    {
        obicnabrzina=x;
        maxbrzina=y;
    }
    Kuler(const Kuler &k)
    {
        obicnabrzina=k.obicnabrzina;
        maxbrzina=maxbrzina;
    }
    friend ostream&operator<<(ostream&izlaz,const Kuler& K)
    {
        izlaz<<"Trenutna brzina je "<<K.obicnabrzina<<endl;
        izlaz<<"Maksimalna brzina "<<K.maxbrzina<<endl;
        return izlaz;
    }

};
#endif // KULER_HPP_INCLUDED
