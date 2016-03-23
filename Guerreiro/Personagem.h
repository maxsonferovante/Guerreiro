#ifndef PERSONAGEM_H
#define PERSONAGEM_H


#include <string>
#include <iostream>
#include <vector>
#include "Data.h"

using std::string;
using std::ostream;
using std::cout;
using std::vector;

class Personagem
{
public:
    Personagem();
    Personagem(const string &, int , int , int);
    Personagem(const Personagem &);
    ~Personagem();
    
    virtual void adicionarRecompensas(float) = 0;
    virtual void aumentarXp() = 0;
protected:
    string nomedoPersonagem;
    int life;
    vector <float> recompensas;
    int xp;
    Data datadeNascimento;
    const static int IncrementoLife;
    const static int DecrementoLife;

};

#endif // PERSONAGEM_H
