#include "Mago.h"


const int Mago::IncrementoMana = 13;
const int Mago::IncrementoIntelligence = 3;
const int Mago::DecrementoMana = 13;

Mago:: Mago(string nome,int dia, int mes, int ano)
:intelligence(33), mana(800), Personagem(nome, dia, mes, ano)
{

}
Mago::Mago(const Mago &outro)
:Personagem (static_cast < Personagem > (outro))
{
    this->mana = outro.mana;
    this->intelligence = outro.intelligence;
    
    this->life = outro.life;
    
    /*Inicio da duvida: Será se é recomendado a implementação dessa forma ??????*/
    this->quantidadeRecompensas = outro.quantidadeRecompensas;
    this->recompensas = new float[this->quantidadeRecompensas];
    for (int i=0;i<this->quantidadeRecompensas-1;i++)
            this->recompensas[i] = outro.recompensas[i];
    /*Fim da duvida.*/
}
Mago::~Mago()
{
}

void Mago::ataqueMagico(int &resistenciadoInimigo)
{
    
}
void Mago::defesaMagica(int &resistenciadoInimigo)
{
    
}
ostream & operator<<(ostream &output, const Mago &mago)
{
    output << static_cast < Personagem > (mago);
    output <<"\nQuantidade de Mana: "<<mago.mana;
    output <<"\nInteligencia: "<<mago.intelligence;
    return output;
}

const Mago& Mago::operator=(const Mago &mago)
{
    this->mana = mago.mana;
    this->intelligence = mago.intelligence;
    
    this->nomedoPersonagem = mago.nomedoPersonagem;
    this->life = mago.life;
    this->quantidadeRecompensas = mago.quantidadeRecompensas;
    
    delete [] recompensas;
    this->recompensas = new float[this->quantidadeRecompensas];
     for (int i=0; i<this->quantidadeRecompensas-1;i++)
        this->recompensas[i] = mago.recompensas[i];
    
    datadeNascimento.setday(mago.datadeNascimento.getday());
    datadeNascimento.setmonth(mago.datadeNascimento.getmonth());
    datadeNascimento.setyear(mago.datadeNascimento.getyear());
}