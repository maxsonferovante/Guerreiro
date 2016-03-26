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

int Personagem::getLife() { return this->life; }
string Personagem::getNome() { return this->nomedoPersonagem; }
int Personagem::getXp() { return this->xp; };

void Personagem::setXp(int novo_xp) { this->xp += novo_xp; }
void Personagem::setLife(int nova_vida) { this->life = nova_vida; }