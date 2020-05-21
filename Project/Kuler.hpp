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
    friend ostream&operator<<(ostream&izlaz,const Kuler& K)
    {
        izlaz<<"Procesor - ispis"<<endl;
        izlaz<<"Trenutna brzina je"<<K.obicnabrzina<<endl;
        izlaz<<"Maksimalna brzina"<<K.maxbrzina<<endl;
        return izlaz;
    }

};


#endif // KULER_HPP_INCLUDED
