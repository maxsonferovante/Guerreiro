#include "Mago.h"


const int Mago::IncrementoMana = 13;
const int Mago::IncrementoIntelligence = 3;
const int Mago::DecrementoMana = 13;

Mago:: Mago(string nome,int dia, int mes, int ano)
:intelligence(33), mana(800), Personagem(nome, dia, mes, ano)
{
    this->nomedoPersonagem = nome;
    
}
Mago::Mago(const Mago &outro)
{
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    this->quantidadeRecompensas = outro.quantidadeRecompensas;

    delete [] recompensas;
    this->recompensas = new float[this->quantidadeRecompensas];    
    
    for (int i=0; i<this->quantidadeRecompensas-1;i++)
        this->recompensas[i] = outro.recompensas[i];

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
    if(this->quantidadeRecompensas !=0)
    {
        float *aux = new float[this->quantidadeRecompensas];
    
        for (int i=0 ; i <this->quantidadeRecompensas-1; i++)
            aux[i] = this->recompensas[i];
                
        delete [] recompensas;
                
        recompensas = new float[++this->quantidadeRecompensas];
        for (int i=0; i<this->quantidadeRecompensas;i++)
            this->recompensas[i] = aux[i] ;
                
        this->recompensas[this->quantidadeRecompensas-1] = recompensa;
        delete [] aux;            
    }
    else
    {
        this->recompensas = new float[++this->quantidadeRecompensas];
        this->recompensas[0] = recompensa;
    }
}

