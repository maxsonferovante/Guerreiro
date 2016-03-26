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
void Mago::aumentarXp(int ganho)
{
    this->life += this->life * ( ganho *( ( this->IncrementoLife + this->xp ) / 100 ));
    this->mana += this->mana * ( ganho *( ( this->IncrementoMana + this->xp ) / 100 ));
    this->intelligence += this->intelligence * ( ganho *( ( this->IncrementoIntelligence + this->xp ) / 100 ));
    
    if (ganho == 1)
        this->xp++;
    else
        this->xp = ganho;
}

