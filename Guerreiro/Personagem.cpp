#include "Personagem.h"


const int Personagem::DecrementoLife = 13;
const int Personagem::IncrementoLife = 13;
Personagem::Personagem() {}
Personagem::Personagem(const string &nome,int dia, int mes, int ano)
:life(1200),datadeNascimento(dia,mes,ano)
{
    this->nomedoPersonagem = nome;
    this->xp = 1;
}

Personagem::~Personagem(){
    
}

string Personagem::getNome() { return this->nomedoPersonagem; };

int Personagem::getXp() { return this->xp; };
