#include "Espartano.h"

Espartano::Espartano(int linha, const string &nome, int dia, int mes, int ano, Espada *espada)
:Guerreiro(nome, dia,mes,ano, espada)
{
    if(linha > 0 && linha<4)
        this->linhadaInfantaria = linha;
    else
        this->linhadaInfantaria = 3;
}
Espartano::Espartano(const Espartano &outro)
{
    this->strenght = outro.strenght;
    this->agility = outro.agility;
    this->armor = outro.armor;
    
    this->nomedoPersonagem = outro.nomedoPersonagem;
    this->life = outro.life;
    
    this->recompensas = outro.recompensas;
    
    datadeNascimento.setmonth(outro.datadeNascimento.getmonth());
    datadeNascimento.setyear(outro.datadeNascimento.getyear());
    datadeNascimento.setday(outro.datadeNascimento.getday());
    
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
        cout<<"O Guerreiro Espartano ja esta na linha ";
    
}
void Espartano::ataqueFisicodoGuerreiro (int &armordoInimigo ){
    
    cout<<"\nO Guerreiro "<<this->nomedoPersonagem<<" esta atacando fisicamente...\n";
	if ( (this->agility + this->strenght/4) > armordoInimigo)
        armordoInimigo -= (this->agility + this->strenght)/3;  
    else
        if( (this->agility + this->strenght/4) == armordoInimigo)
            armordoInimigo -= (this->agility + this->strenght)/5;
        else
            cout<<"\nO Inimigo defendou o ataque fisico...\n";
    
    if (armordoInimigo < 0) armordoInimigo = 0;
}
void Espartano::defesadoGuerreiro( int &ataquedoInimigo){
    
    if (this->armor < ataquedoInimigo )
        {
            this->life -= (ataquedoInimigo/this->armor);
            cout<<"\nLife do Guerreiro "<<this->life<<std::endl;
        }
}
const Espartano& Espartano::operator=(const Espartano &espartano)
{
    this->linhadaInfantaria = espartano.linhadaInfantaria;
    this->strenght = espartano.strenght;
    this->agility = espartano.agility;
    this->armor = espartano.armor;
    
    this->nomedoPersonagem = espartano.nomedoPersonagem;
    this->life = espartano.life;

    this->recompensas = espartano.recompensas;
    
    datadeNascimento.setmonth(espartano.datadeNascimento.getmonth());
    datadeNascimento.setyear(espartano.datadeNascimento.getyear());
    datadeNascimento.setday(espartano.datadeNascimento.getday());
}
ostream & operator<<(ostream &output, const Espartano & espartano)
{
        output <<"\n\t>>>>>>> GUERREIRO ESPARTANO <<<<<<";
        output <<"\nNome: "<<espartano.nomedoPersonagem;
        output <<"\nAgilidade: "<<espartano.agility;
        output <<"\nArmadura: "<<espartano.armor;
        output <<"\nArmadura (1 - Vestida ou 0 - Nao vestida):"<<espartano.armaduraVestida;
        output <<"\nLinha da Infantaria: "<<espartano.linhadaInfantaria;
       
        output <<"\n\t------DATA DE NASCIMENTO------";
        output <<"\nNascido em "<<espartano.datadeNascimento.getday()<<"/"<<espartano.datadeNascimento.getmonth()<<"/"<<espartano.datadeNascimento.getyear();
        
        output <<"\n\t------ESPADA------";
        output <<"\nMaterial: "<<espartano.espadadoGuerreiro->getTipodaEspada();
        output <<"\nComprimento: "<<espartano.espadadoGuerreiro->getComprimentodaEspada();
        output <<"\nEmpunhada (1 - SIM ou 0 - NAO):"<<espartano.espadadoGuerreiro->getEmpunhada();
        
        output<<"\n\t-----RECOMPENSAS-----";
        for (int i=0;i<espartano.recompensas.size();i++)
            output <<" "<<espartano.recompensas[i];
            
        return output;
}
