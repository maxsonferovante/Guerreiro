#include "Espartano.h"

Espartano::Espartano(int linha, const string nome, int dia, int mes, int ano, Espada * espada)
:Guerreiro(nome, dia,mes,ano, espada)
{
    if(linha > 0 && linha<4)
        this->linhadaInfantaria = linha;
    else
        this->linhadaInfantaria = 3;
}
Espartano::Espartano(const Espartano &outro)
:Guerreiro(static_cast <Guerreiro> (outro))
{
    this->linhadaInfantaria = outro.linhadaInfantaria;
}
Espartano::~Espartano()
{
    
}
void Espartano::mudarlinhanaInfantaria()
{
    if (this->linhadaInfantaria == 3 || this->linhadaInfantaria == 2) 
        this->linhadaInfantaria --;
    else
        cout<<"O Guerreiro Espartano ja esta na linha "
    
}

