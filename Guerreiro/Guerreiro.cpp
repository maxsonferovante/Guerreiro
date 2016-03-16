#include "Guerreiro.h"

int Guerreiro::quantidadedeGuerreiros = 0;
const int Guerreiro::IncrementoStrenght = 2;
const int Guerreiro::IncrementoAgility = 2;

const int Guerreiro::IncrementoArmor  = 2;
const int Guerreiro::IncrementoDamage = 2;

bool Guerreiro::armaduraVestida = false;

Guerreiro::Guerreiro(Espada *espada)
:strenght(33), agility(33), armor(3),Personagem("Sem Nome",21,12,2012)
{
    this->espadadoGuerreiro = espada; 
    quantidadedeGuerreiros++;
}
Guerreiro::Guerreiro( const string &nome,int dia, int mes, int ano, Espada *espada)
:strenght(33), agility(33), armor(3),Personagem(nome,dia,mes,ano)
{
        this->espadadoGuerreiro = espada;
        quantidadedeGuerreiros++;
}
Guerreiro::Guerreiro(const Guerreiro &outro)
{
    this->strenght = outro.strenght;
    this->agility = outro.agility;
    this->armor = outro.armor;
 
    this->espadadoGuerreiro = outro.espadadoGuerreiro;
    
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

void Guerreiro::treinarGuerreiro (){
	cout<<"\nTodos os dias o Guerreiro "<<this->nomedoPersonagem<<" treina cada um de seus atributos...";
	cout<<"\nO treino foi concluido e o Guerreiro "<<this->nomedoPersonagem<<" ganhou +2 em cada atributo e gastou 30 de mana.\nDescanse agora!\n";
	
    Sleep(3000); // tempo do treino.
	
    this->strenght += IncrementoStrenght;
	this->agility += IncrementoAgility;
	this->armor += IncrementoArmor;

}
void Guerreiro::regenerarGuerreiro (){
	cout<<"\nO Guerreiro "<<this->nomedoPersonagem<<" descansa para gerenerar nama gasta no dia, ganha +25 de mana...";
    Sleep(3000); // tempo do treino.
    this->life += this->IncrementoLife;
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
void Guerreiro::exibirAtributos() const{
    cout<<"\n\nNome: "<<this->nomedoPersonagem;
    cout<<"\nStrenght: "<<this->strenght;
    cout<<"\nAgility: "<<this->agility;
    cout<<"\nLife: "<<this->life;

    cout<<"\nArmor: "<<this->armor<<std::endl;
    
    cout<<"Recompensas: ";
    for(int i=0; i < quantidadeRecompensas;i++)
        cout<<this->recompensas[i]<<" ";
    
    datadeNascimento.exibirData();
    espadadoGuerreiro->exibirEspada();
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
