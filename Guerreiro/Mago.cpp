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
    static_cast < Personagem > (*this) = Personagem (static_cast <Personagem> (mago))
}