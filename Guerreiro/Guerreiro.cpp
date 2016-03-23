#include "Guerreiro.h"

int Guerreiro::quantidadedeGuerreiros = 0;
const int Guerreiro::IncrementoStrenght = 2;
const int Guerreiro::IncrementoAgility = 2;

const int Guerreiro::IncrementoArmor  = 2;
const int Guerreiro::IncrementoDamage = 2;

bool Guerreiro::armaduraVestida = false;

Guerreiro::Guerreiro(Espada *espada)
:strenght(33), agility(33), armor(3), Personagem("Sem nome",21,12,2012)
{
    this->espadadoGuerreiro = espada;
    quantidadedeGuerreiros++;
}
Guerreiro::Guerreiro( const string &nome,int dia, int mes, int ano, Espada *espada)
:strenght(33), agility(33), armor(3), Personagem(nome, dia, mes, ano)
{
        this->espadadoGuerreiro = espada;
        quantidadedeGuerreiros++;
}
 Guerreiro::Guerreiro(const Guerreiro &outro)
 
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
    
     this->espadadoGuerreiro = 0;
     
     quantidadedeGuerreiros++;
    }
    
Guerreiro::~Guerreiro(){
    quantidadedeGuerreiros--;
    
}

void Guerreiro::setStrenghtdoGuerreiro ( int S){
	if (S> 0)
        this->strenght = S;
    else
        this->strenght = 33;
}
void Guerreiro::setAgilitydoGuerreiro ( int A){
	if(A>0)
		this->agility = A;
	else
        this->agility = 33;
}
void Guerreiro::setArmorGuerreiro( int ar){
	if(ar>0)
		this->armor = ar;
	else
        this->armor = 3;
}
int Guerreiro::getStrenghtdoGuerreiro () const{
	return this->strenght;
}
int Guerreiro::getAgilitydoGuerreiro () const{
	return this->agility;
}
int Guerreiro::getArmorGuerreiro() const{
	return this->armor;
}

void Guerreiro::ataqueEspadaGuerreiro(int &resistenciadoInimigo)
{
    if (espadadoGuerreiro->getEmpunhada())
    {
        if ((this->strenght + this->agility) / 5 > resistenciadoInimigo)
        {
            cout<<"\nO Guerreiro "<<this->nomedoPersonagem<<" esta atacando com sua espada...\n";
            resistenciadoInimigo -= resistenciadoInimigo - ((this->strenght + this->agility) / 5);
            Sleep(3000);
            cout<<"\nAtaque realizado...\n";
        }
        else
            cout<<"\nO Guerreiro "<<this->nomedoPersonagem<<" teve seu ataque com a espada defendido... \n";
    }
    else
        cout<<"\nEspada do Guerreiro "<<this->nomedoPersonagem<<" desempunhada...\n";
}
//Método virtual da classe abstrata Personagem.
void Guerreiro::adicionarRecompensas(float recompensa)
{
    this->recompensas.push_back(recompensa);
}
void Guerreiro::aumentarXp()
{
    this->life += this->life * ( ( this->IncrementoLife + this->xp ) / 100 );
    this->strenght += this->strenght * ( ( this->IncrementoStrenght + this->xp ) / 100);
    this->agility += this->agility * ( ( this->IncrementoAgility + this->xp ) /100);
    this->armor += this->armor* ( ( this->IncrementoArmor + this->xp ) /100);
    this->xp++;
}
void Guerreiro::ordenarArmaduraVestida()
{
    if (armaduraVestida == false)
    {
        cout<<"\nSeus guerreiros estao sem suas armaduras.\nFoi ordenado o vestimento da armadura ... \n";
        Sleep(3000);
        armaduraVestida = true;
    }
    cout<<"\Todos os guerreiros estao vestido suas armaduras...\n";
}
void Guerreiro::desordenarArmaduraVestida()
{
    if (armaduraVestida == true)
    {
            cout<<"\nSeus guerreiros estao guardando suas armaduras...\n";
            Sleep(3000);
            cout<<"\nArmaduras guardadas...\n";
            armaduraVestida = false;
    }
}
