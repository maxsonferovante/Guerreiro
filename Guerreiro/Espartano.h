#ifndef ESPARTANO_H
#define ESPARTANO_H

#include "Guerreiro.h"
#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Espartano: public Guerreiro
{
    friend ostream & operator<<(ostream &, const Espartano &);
public:
    Espartano(int, const string &, int, int , int, Espada *);
    Espartano(const Espartano &);
    ~Espartano();
    
    void mudarlinhanaInfantaria();
    void ataqueFisicodoGuerreiro(int &);
    void defesadoGuerreiro(int &);
    const Espartano &operator=(const Espartano &);
        
private:
    int linhadaInfantaria;
};

#endif // ESPARTANO_H


