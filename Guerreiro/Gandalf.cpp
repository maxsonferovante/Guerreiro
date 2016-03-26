#include "Gandalf.h"

Gandalf::Gandalf(const string &nome, int dia, int mes, int ano, int pre)
:Mago(nome, dia, mes,ano)
{
    if (pre > 0)
        this->prepotencia = pre;
    else 
        this->prepotencia = 0;
}
Gandalf::Gandalf(const Gandalf &outro)
{
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    this->mana = outro.mana;
    this->intelligence = outro.intelligence;
    this->prepotencia = outro.prepotencia;
    
    this->recompensas = outro.recompensas;
    
    datadeNascimento.setmonth(outro.datadeNascimento.getmonth());
    datadeNascimento.setyear(outro.datadeNascimento.getyear());
    datadeNascimento.setday(outro.datadeNascimento.getday());
}
Gandalf::~Gandalf()
{
}

void Gandalf::ataqueMagico(int &resistenciaInimiga)
{
    cout<<"\nO Mago "<<this->nomedoPersonagem<<" esta atacando magicamente...\n";
	if ( ((this->intelligence + this->prepotencia)/4) > resistenciaInimiga)
        resistenciaInimiga -= (this->intelligence + this->prepotencia)/3;  
    else
        if( ((this->intelligence + this->prepotencia)/4) == resistenciaInimiga)
            resistenciaInimiga -= (this->intelligence + this->prepotencia)/5;
        else
            cout<<"\nO Inimigo defendou o ataque magico...\n";
    
    if (resistenciaInimiga < 0) resistenciaInimiga = 0;
}

void Gandalf::defesaMagica(int & ataquedoInimigo)
{
    if (this->mana/8 < ataquedoInimigo )
        {
            this->life -= (ataquedoInimigo/this->mana/8);
            cout<<"\nLife do Mago "<<this->life<<std::endl;
        }
}
ostream &operator<<(ostream &output, const Gandalf &gandalf)
{
        output <<"\n\t>>>>>>> MAGO <<<<<<";
        output <<"\nNome: "<<gandalf.nomedoPersonagem;
        output <<"\nMana: "<<gandalf.mana;
        output <<"\nInteligencia: "<<gandalf.intelligence;
       
        output <<"\n\t------DATA DE NASCIMENTO------";
        output <<"\nNascido em "<<gandalf.datadeNascimento.getday()<<"/"<<gandalf.datadeNascimento.getmonth()<<"/"<<gandalf.datadeNascimento.getyear();
                
        output<<"\n\t-----RECOMPENSAS-----";
        for (int i=0;i<gandalf.recompensas.size();i++)
            output <<" "<<gandalf.recompensas[i];
            
        return output;
}
const Gandalf &Gandalf::operator=(const Gandalf &gandalf)
{    
    this->mana = gandalf.mana;
    this->intelligence = gandalf.intelligence;
    this->nomedoPersonagem = gandalf.nomedoPersonagem;
    this->life = gandalf.life;

    this->recompensas = gandalf.recompensas;
    
    datadeNascimento.setmonth(gandalf.datadeNascimento.getmonth());
    datadeNascimento.setyear(gandalf.datadeNascimento.getyear());
    datadeNascimento.setday(gandalf.datadeNascimento.getday());

}
