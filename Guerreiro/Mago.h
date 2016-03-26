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
    inline Mago() {};
    Mago(const string &, int, int, int);
    ~Mago();
    
    virtual void ataqueMagico(int &) = 0;
    virtual void defesaMagica(int &) = 0;
    
    void adicionarRecompensas(float);
    void aumentarXp(int = 1);
protected:
    int mana;
    int intelligence;
    const static int IncrementoMana;
    const static int IncrementoIntelligence;
    const static int DecrementoMana;
    
};

#endif // MAGO_H
