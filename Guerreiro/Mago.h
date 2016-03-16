#ifndef MAGO_H
#define MAGO_H

#include <string>
#include <iostream>
#include "Personagem.h"

using std::string;
using std::ostream;

class Mago: public Personagem
{
public:
    Mago(string, int, int, int);
    Mago(const Mago &);
    ~Mago();
    virtual void ataqueMagico() = 0;
    virtual void defesaMagica() = 0;
protected:
    int mana;
    int intelligence;
    const static int IncrementoMana;
    const static int IncrementoIntelligence;
    const static int DecrementoMana;
    
};

#endif // MAGO_H
