#ifndef PROGRAM_HPP_INCLUDED
#define PROGRAM_HPP_INCLUDED

enum kategorija{igrica,kod,aplikacija};

class Program{
protected:
    int zauzima;
    kategorija k;
public:
    Program(x=1,y=kod)
    {
        zauzima=x;
        k=y;
    }

};

#endif // PROGRAM_HPP_INCLUDED
