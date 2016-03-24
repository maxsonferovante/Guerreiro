#include "Mago.h"


const int Mago::IncrementoMana = 13;
const int Mago::IncrementoIntelligence = 3;
const int Mago::DecrementoMana = 13;

Mago::Mago(const string &nome,int dia, int mes, int ano)
:intelligence(33), mana(800), Personagem(nome,dia,mes,ano)
{

}

Mago::~Mago(){
    
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

