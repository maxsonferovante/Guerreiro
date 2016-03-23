#ifndef ESPARTANO_H
#define ESPARTANO_H

#include "Guerreiro.h"
#include "Espada.h"
#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Espartano: public Guerreiro
{
    friend ostream & operator<<(ostream &, const Espartano &);
public:
    inline Espartano(){};
    Espartano(int, const string &, int, int , int, Espada *);
    Espartano(const Espartano &);
    ~Espartano();
    
    void mudarlinhanaInfantaria();
    void ataqueFisicodoGuerreiro(int &);
    void defesadoGuerreiro(int &);
    const Espartano &operator=(const Espartano &);
    string getNome();
    int getXp();
private:
    int linhadaInfantaria;
};

#endif // ESPARTANO_H


