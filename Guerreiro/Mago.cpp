#include "Mago.h"


const int Mago::IncrementoMana = 13;
const int Mago::IncrementoIntelligence = 3;
const int Mago::DecrementoMana = 13;

Mago:: Mago(const string &nome,int dia, int mes, int ano)
:intelligence(33), mana(800), Personagem(nome, dia, mes, ano)
{
    this->nomedoPersonagem = nome;
    
}
Mago::Mago(const Mago &outro)
{
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    this->recompensas = outro.recompensas; // agora são do tipo vector.
    this->xp = outro.xp;

    datadeNascimento.setmonth(outro.datadeNascimento.getmonth());
    datadeNascimento.setyear(outro.datadeNascimento.getyear());
    datadeNascimento.setday(outro.datadeNascimento.getday());
    
    this->mana = outro.mana;
    this->intelligence = outro.intelligence;
}
Mago::~Mago()
{
}
void Mago::adicionarRecompensas(float recompensa)
{
    this->recompensas.push_back(recompensa); // A implementação mais simples da minha vida :D .
}
void Mago::aumentarXp()
{
    this->life += this->life * ( ( this->IncrementoLife + this->xp ) / 100 );
    this->mana += this->mana * ( ( this->IncrementoMana + this->xp ) / 100 );
    this->intelligence += this->intelligence * ( ( this->intelligence + this->xp ) / 100 );
    
    this->xp++;
}