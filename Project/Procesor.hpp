#ifndef PROCESOR_HPP_INCLUDED
#define PROCESOR_HPP_INCLUDED

enum soket {AM4=1,TR4,intel1,intel2};
class Procesor
{
private:
    int jezgra;
    double baseclock;
    double boostclock;
    int oktemp;
    int previsetemp;
    soket S;
public:
    Procesor(int j=4,double b=4.3,double o=5.7,int t=65,int p=100,soket s=AM4)
    {
        jezgra=j;
        baseclock=b;
        boostclock=o;
        oktemp=t;
        previsetemp=p;
        S=s;
    }
    Procesor(const Procesor &P)
    {
        jezgra=P.jezgra;
        baseclock=P.baseclock;
        boostclock=P.boostclock;
        oktemp=P.oktemp;
        previsetemp=P.previsetemp;
        S=P.S;
    }
    string sokeet()const
    {
        string g;
        switch(S)
        {
            case 1:g="AM4";
                    break;
            case 2:g="TR4";
                    break;
            case 3:g="intel1";
                    break;
            case 4:g="intel2";
                    break;
        }
        return g;
    }
    friend ostream&operator<<(ostream&izlaz,const Procesor& P)
    {
        izlaz<<"Broj jezgara "<<P.jezgra<<endl;
        izlaz<<"Bazna frakvencija "<<P.baseclock<<endl;
        izlaz<<"Pojacana frekvencija "<<P.boostclock<<endl;
        izlaz<<"Dobra temperatura je "<<P.oktemp<<endl;
        izlaz<<"Prevelika temperatura je "<<P.previsetemp<<endl;
        izlaz<<"soket je : "<<P.sokeet()<<endl;
        return izlaz;
    }

};

#endif // PROCESOR_HPP_INCLUDED
