#ifndef PROGRAM_HPP_INCLUDED
#define PROGRAM_HPP_INCLUDED

enum kategorija{igrica,kod,aplikacija};

class Program{
protected:
    int zauzima;
    kategorija k;
public:
    Program(int x=1,kategorija y=kod)
    {
        zauzima=x;
        k=y;
    }
    int getzauzima()const
    {
        return zauzima;
    }
};

#endif // PROGRAM_HPP_INCLUDED
