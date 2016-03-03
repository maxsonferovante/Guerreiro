

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

ostream &operator<<(ostream &output, const Personagem &personagem)
{
    output <<"\nNome do Personagem: "<<personagem.nomedoPersonagem;
    output <<"\nQuantidade de Vida: "<<personagem.life;
    output <<"\nQuantidade de Recompensas: "<<personagem.quantidadeRecompensas;
    output <<"Valores das Recompensas: ";
    for (int i=0; i<personagem.quantidadeRecompensas-1;i++)
        output <<"\n "<<i+1<<" - "<<personagem.recompensas[i];
    return output;
}
const Personagem& Personagem::operator=(const Personagem &personagem)
{
    this->nomedoPersonagem = personagem.nomedoPersonagem;
    this->life = personagem.life;
    this->quantidadeRecompensas = personagem.quantidadeRecompensas;
    
    delete [] recompensas;
    this->recompensas = new float[this->quantidadeRecompensas];
    for (int i=0; i<this->quantidadeRecompensas-1;i++)
        this->recompensas[i] = personagem.recompensas[i];
    
    datadeNascimento.setday(personagem.datadeNascimento.getday());
    datadeNascimento.setmonth(personagem.datadeNascimento.getmonth());
    datadeNascimento.setyear(personagem.datadeNascimento.getyear());
}