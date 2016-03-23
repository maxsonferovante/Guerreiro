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
Personagem::Personagem(const Personagem &outro)
{
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    this->xp = outro.xp;
    this->recompensas = outro.recompensas;
    
    datadeNascimento.setmonth(outro.datadeNascimento.getmonth());
    datadeNascimento.setyear(outro.datadeNascimento.getyear());
    datadeNascimento.setday(outro.datadeNascimento.getday());
    
}

Personagem::~Personagem(){
    
}