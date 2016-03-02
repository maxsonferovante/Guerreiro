#include "Personagem.h"

const int Personagem::DecrementoLife = 13;
const int Personagem::IncrementoLife = 13;

Personagem::Personagem(String nome, int l,int dia, int mes, int ano)
:datadeNascimento(dia,mes,ano)
{
    this->nomedoPersonagem = nome;
    this->life = (l>0: j ? 1000);
    this->quantidadeRecompensas = 0;
}
Personagem::Personagem(const Personagem & outro)
:datadeNascimento(outro.datadeNascimento)
{
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    this->quantidadeRecompensas = 0;
}

Personagem::~Personagem()
{
    delete []recompenas;
}

void Personagem::adicionarRecompensas(float recompensa)
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
