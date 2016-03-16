#include "Mago.h"


const int Mago::IncrementoMana = 13;
const int Mago::IncrementoIntelligence = 3;
const int Mago::DecrementoMana = 13;

Mago:: Mago(string nome,int dia, int mes, int ano)
:intelligence(33), mana(800), Personagem(nome, dia, mes, ano)
{

}
Mago::Mago(const Mago &outro)
{
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    this->quantidadeRecompensas = outro.quantidadeRecompensas;
    
    
    this->mana = outro.mana;
    this->intelligence = outro.intelligence;
}
Mago::~Mago()
{
}
