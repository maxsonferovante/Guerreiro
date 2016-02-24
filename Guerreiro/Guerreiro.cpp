#include<iostream>
#include<windows.h>

#include "Guerreiro.h"
#include "Espada.h"
#include <string>

using std::string;
using std::cout;

int Guerreiro::quantidadedeGuerreiros = 0;
const int Guerreiro::IncrementoStrenght = 2;
const int Guerreiro::IncrementoAgility = 2;
const int Guerreiro::IncrementoIntelligence = 2;
const int Guerreiro::IncrementoLife = 13;
const int Guerreiro::IncrementoMana = 24;
const int Guerreiro::IncrementoArmor  = 2;
const int Guerreiro::IncrementoDamage = 2;
const int Guerreiro::DecrementoLife = 13;
const int Guerreiro::DecrementoMana = 24;

bool Guerreiro::armaduraVestida = false;

Guerreiro::Guerreiro(Espada *espada)
:nomedoGuerreiro("Desconhecido"),strenght(33), agility(33),intelligence(33), life(1200), mana(600),armor(3), damage(33), datadeNascimento()
{
    this->espadadoGuerreiro = espada; 
    this->quantidadeRecompensas = 0;
    quantidadedeGuerreiros++;
}
Guerreiro::Guerreiro( const string &N, int Li, int Ma, int Da, int dia, int mes, int ano, Espada *espada)
:strenght(33), agility(33),intelligence(33),armor(3), datadeNascimento(dia, mes, ano)
{
        this->espadadoGuerreiro = espada;
        
        this->nomedoGuerreiro = N;
        this->life = (Li > 0) ? Li : 1200;
        this->mana = (Ma > 0) ? Ma : 600;
        this->damage = (Da > 0) ? Da : 33;        
        
        this->quantidadeRecompensas = 0;
        quantidadedeGuerreiros++;
}
Guerreiro::Guerreiro(const Guerreiro &outro)
:datadeNascimento(outro.datadeNascimento)
{
    this->nomedoGuerreiro = outro.nomedoGuerreiro;
    this->strenght = outro.strenght;
    this->agility = outro.agility;
    this->intelligence = outro.intelligence;
    this->life = outro.life;
    this->mana = outro.armor;
    this->armor = outro.armor;
    this->damage = outro.damage;
    this->quantidadeRecompensas = outro.quantidadeRecompensas;
    this->recompensas = outro.recompensas;
    
    this->espadadoGuerreiro = outro.espadadoGuerreiro;
    
    quantidadedeGuerreiros++;
}

Guerreiro::~Guerreiro(){
    delete [] recompensas;
    quantidadedeGuerreiros--;
    
}
void Guerreiro::setNomedoGuerreiro ( string nome){
		this->nomedoGuerreiro = nome;
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
void Guerreiro::setIntelligencedoGuerreiro ( int I){
	if(I>0)
		this->intelligence = I;
	else
        this->intelligence = 33;
}
void Guerreiro::setLifedoGuerreiro ( int L){
	if(L>0)
		this->life = L;
	else
        this->life = 1200;
}
void Guerreiro::setManadoGuerreiro ( int M){
	if(M>0)
		this->mana = M;
	else
       this-> mana = 800;
}
void Guerreiro::setArmorGuerreiro( int ar){
	if(ar>0)
		this->armor = ar;
	else
        this->armor = 3;
}
void Guerreiro::setDamageGuerreiro( int da){
	if(da>0)
		this->damage = da;
	else
        this->damage = 33;
}

string Guerreiro::getNomedoGuerreiro () const{
	return this->nomedoGuerreiro;	
}
int Guerreiro::getStrenghtdoGuerreiro () const{
	return this->strenght;
}
int Guerreiro::getAgilitydoGuerreiro () const{
	return this->agility;
}
int Guerreiro::getIntelligencedoGuerreiro () const{
	return this->intelligence;
}
int Guerreiro::getLifedoGuerreiro () const{
	return this->life;
}
int Guerreiro::getManadoGuerreiro () const{
	return this->mana;
}
int Guerreiro::getArmorGuerreiro() const{
	return this->armor;
}
int Guerreiro::getDamageGuerreiro() const{
	return this->damage;
}

void Guerreiro::treinarGuerreiro (){
	cout<<"\nTodos os dias o Guerreiro "<<this->nomedoGuerreiro<<" treina cada um de seus atributos...";
	cout<<"\nO treino foi concluido e o Guerreiro "<<this->nomedoGuerreiro<<" ganhou +2 em cada atributo e gastou 30 de mana.\nDescanse agora!\n";
	
    Sleep(3000); // tempo do treino.
	
    this->strenght += IncrementoStrenght;
	this->agility += IncrementoAgility;
	this->intelligence +=IncrementoIntelligence;
	this->armor += IncrementoArmor;
	this->damage += IncrementoDamage;
	this->mana -= IncrementoMana;
}
void Guerreiro::regenerarGuerreiro (){
	cout<<"\nO Guerreiro "<<this->nomedoGuerreiro<<" descansa para gerenerar nama gasta no dia, ganha +25 de mana...";
    Sleep(3000); // tempo do treino.
	this->mana += IncrementoMana;
}
void Guerreiro::alimentarGuerreiro(){
	cout<<"\nAo alimentar-se o Guerreiro "<<this->nomedoGuerreiro<<" ganha +13 de mana e +24 de vida";
	this->mana += IncrementoMana;
	this->life + IncrementoLife;
}

void Guerreiro::ataqueFisicodoGuerreiro (int &armordoInimigo ){
    
    cout<<"\nO Guerreiro "<<this->nomedoGuerreiro<<" esta atacando fisicamente...\n";
	if ( (this->damage + this->strenght/4) > armordoInimigo)
        armordoInimigo -= this->damage/3;  
    else
        if( (this->damage + this->strenght/4) == armordoInimigo)
            armordoInimigo -= this->damage/5;
        else
            cout<<"\nO Inimigo defendou o ataque fisico...\n";
    
    if (armordoInimigo < 0) armordoInimigo = 0;
}
void Guerreiro::ataqueMagicodoGuerreiro (int &armordoInimigo){
    cout<<"\nO Guerreiro "<<this->nomedoGuerreiro<<"  esta atacando magicamente...\n";
    if ( (this->damage + this->intelligence/3) > armordoInimigo)
        armordoInimigo -= this->damage/2;
    else
        if( (this->damage + this->intelligence/3) == armordoInimigo)
            armordoInimigo -= this->damage/4;
        else
            cout<<"\nO Inimigo defendeu o ataque magico...\n";
    
    if (armordoInimigo < 0) armordoInimigo = 0;
}
bool Guerreiro::defesadoGuerreiro( int ataquedoInimigo){
    
    if (this->armor < ataquedoInimigo )
        {
            this->life -= (ataquedoInimigo/this->armor);
            cout<<"\nLife do Guerreiro "<<this->life<<std::endl;
            return false;
        }
    else
        return true;
}
void Guerreiro::ataqueEspadaGuerreiro(int &resistenciadoInimigo)
{
    if (espadadoGuerreiro->getEmpunha())
    {
        if ((this->strenght + this->agility) / 5 > resistenciadoInimigo)
        {
            cout<<"\nO Guerreiro "<<this->nomedoGuerreiro<<" esta atacando com sua espada...\n";
            resistenciadoInimigo -= resistenciadoInimigo - ((this->strenght + this->agility) / 5);
            Sleep(3000);
            cout<<"\nAtaque realizado...\n";
        }
        else
            cout<<"\nO Guerreiro "<<this->nomedoGuerreiro<<" teve seu ataque com a espada defendido... \n";
    }
    else
        cout<<"\nEspada do Guerreiro "<<this->nomedoGuerreiro<<" desempunhada...\n";
}
void Guerreiro::exibirAtributos() const{
    cout<<"\n\nNome: "<<this->nomedoGuerreiro;
    cout<<"\nStrenght: "<<this->strenght;
    cout<<"\nAgility: "<<this->agility;
    cout<<"\nIntelligence: "<<this->intelligence;
    cout<<"\nLife: "<<this->life;
    cout<<"\nMana: "<<this->mana;
    cout<<"\nArmor: "<<this->armor;
    cout<<"\nDamage: "<<this->damage<<std::endl;
    
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
void Guerreiro::adicionarRecompensas(float recompensa)
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

ostream &operator<<(ostream &output, const Guerreiro &guerreiro )
{
    output <<"\nNome do Guerreiro: " <<guerreiro.nomedoGuerreiro <<".\n" <<"Quantidade de vida: "<<guerreiro.life <<".\n" <<"Quantidade de mana: "<<guerreiro.mana <<".\n";
    return output;
}

const Guerreiro& Guerreiro::operator=(const Guerreiro &guerreiro)
{
        quantidadeRecompensas = guerreiro.quantidadeRecompensas;
        delete []recompensas;
        recompensas = new float[quantidadeRecompensas];
        for (int i=0; i<quantidadeRecompensas;i++)
            recompensas[i] = guerreiro.recompensas[i];
}
bool Guerreiro::operator==(const Guerreiro &guerreiro) const
{
        if (nomedoGuerreiro != guerreiro.nomedoGuerreiro)
            return false;
        return true;
}
