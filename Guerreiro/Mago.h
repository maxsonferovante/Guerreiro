#ifndef MAGO_H
#define MAGO_H

#include <string>
#include <iostream>
#include "Personagem.h"

using std::string;
using std::ostream;

class Mago: public Personagem
{
    friend ostream & operator<<(ostream &, const Mago &);
public:
    Mago(string, int, int, int);
    Mago(const Mago &);
    ~Mago();
    void ataqueMagico(int &);
    void defesaMagica(int &);
protected:
    int mana;
    int intelligence;
    const static int IncrementoMana;
    const static int IncrementoIntelligence;
    const static int DecrementoMana;
    
    const Mago &operator=(const Mago &);
};

#endif // MAGO_H
