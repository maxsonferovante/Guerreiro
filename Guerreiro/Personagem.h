#ifndef PERSONAGEM_H
#define PERSONAGEM_H


#include<string>
#include<iostream>
#include "Data.h"

using std::string;
using std::ostream;
using std::cout;

class Personagem
{
public:
    Personagem(string, int , int , int);
    Personagem(const Personagem &);
    ~Personagem();
    
    void adicionarRecompensas(float);
protected:
    string nomedoPersonagem;
    int life;
    float *recompensas;
    int quantidadeRecompensas;
    Data datadeNascimento;
    const static int IncrementoLife;
    const static int DecrementoLife;

};

#endif // PERSONAGEM_H
