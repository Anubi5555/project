#ifndef KOMP_HPP_INCLUDED
#define KOMP_HPP_INCLUDED
#include "Monitor.hpp"
#include "Procesor.hpp"
#include "Kuler.hpp"
#include "Zvucnici.hpp"
#include "Opsis.hpp"
#include "Memorija.hpp"

class Komp
{
public:
    Monitor Mon;
    Procesor Pro;
    Kuler Kul;
    Zvucnici Zvu;
    Opsis Ops;
    Memorija Mem;
   // int programi[Mem.getK()]
public:
    Komp():Mon(),Pro(),Kul(),Zvu(),Ops(),Mem()
    {

    }

};

#endif // KOMP_HPP_INCLUDED
