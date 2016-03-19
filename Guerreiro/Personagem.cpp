#include "Personagem.h"


const int Personagem::DecrementoLife = 13;
const int Personagem::IncrementoLife = 13;

Personagem::Personagem(string nome,int dia, int mes, int ano)
:life(1200),datadeNascimento(dia,mes,ano)
{
    this->nomedoPersonagem = nome;
    this->quantidadeRecompensas = 0;
    this->recompensas = 0;
}
Personagem::Personagem(const Personagem & outro)
:datadeNascimento(outro.datadeNascimento)
{
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    this->quantidadeRecompensas = outro.quantidadeRecompensas;
    
    delete [] recompensas;
    this->recompensas = new float[this->quantidadeRecompensas];
    
    for (int i=0; i<this->quantidadeRecompensas-1;i++)
        this->recompensas[i] = outro.recompensas[i];
}

Personagem::~Personagem()
{
    delete [] recompensas;
}