#include<iostream>
#include<windows.h>
#include "Guerreiro.h"
#include <string>

using std::string;
using std::cout;

int Guerreiro::quantidadedeGuerreiros = 0;
const int Guerreiro::incrementoStrenght = 2;
const int Guerreiro::incrementoAgility = 2;
const int Guerreiro::incrementoIntelligence = 2;
const int Guerreiro::incrementoLife = 13;
const int Guerreiro::incrementoMana = 24;
const int Guerreiro::incrementoArmor  = 2;
const int Guerreiro::incrementoDamage = 2;
const int Guerreiro::decrementoLife = 13;
const int Guerreiro::decrementoMana = 24;

bool Guerreiro::armaduraVestida = false;

Guerreiro::Guerreiro()
:nomedoGuerreiro("Desconhecido"),strenght(33), agility(33),intelligence(33), life(1200), mana(600),armor(3), damage(33), datadeNascimento()
{
    quantidadedeGuerreiros++;
}
Guerreiro::Guerreiro( const string &N, int Li, int Ma, int Da, int dia, int mes, int ano)
:strenght(33), agility(33),intelligence(33),armor(3), datadeNascimento(dia, mes, ano)
{
        this->nomedoGuerreiro = N;
        this->life = (Li > 0) ? Li : 1200;
        this->mana = (Ma > 0) ? Ma : 600;
        this->damage = (Da > 0) ? Da : 33;
        
        quantidadedeGuerreiros++;
}
Guerreiro::Guerreiro(const Guerreiro &outro, const Data &dataOutro)
:datadeNascimento(dataOutro)
{
    this->nomedoGuerreiro = outro.nomedoGuerreiro;
    this->strenght = outro.strenght;
    this->agility = outro.agility;
    this->intelligence = outro.intelligence;
    this->life = outro.life;
    this->mana = outro.armor;
    this->armor = outro.armor;
    this->damage = outro.damage;
    quantidadedeGuerreiros++;
}

Guerreiro::~Guerreiro(){
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
	cout<<"\n\nTodos os dias o Guerreiro "<<this->nomedoGuerreiro<<" treina cada um de seus atributos...";
	cout<<"\nO treino foi concluido e o Guerreiro ganhou +2 em cada atributo e gastou 30 de mana.\nDescanse agora!\n";
	
	this->strenght += incrementoStrenght;
	this->agility += incrementoAgility;
	this->intelligence +=incrementoIntelligence;
	this->armor += incrementoArmor;
	this->damage += incrementoDamage;
	this->mana -= incrementoMana;
}
void Guerreiro::regenerarGuerreiro (){
	cout<<"\n\nO Guerreiro "<<this->nomedoGuerreiro<<" descansa para gerenerar nama gasta no dia, ganha +25 de mana...";
	this->mana += incrementoMana;
}

void Guerreiro::ataqueFisicodoGuerreiro (int &armordoInimigo ){
    cout<<"\n\nO Guerreiro esta atacando fisicamente...\n";
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
    cout<<"\n\nO Guerreiro esta atacando magicamente...\n";
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
    if (this->armor < ataquedoInimigo)
        {
            this->life -= (ataquedoInimigo/this->armor);
            return false;
        }
    else
        return true;
}
void Guerreiro::alimentarGuerreiro(){
	cout<<"\n\nAo alimentar-se o Guerreiro ganha +13 de mana e +24 de vida";
	this->mana += incrementoMana;
	this->life + incrementoLife;
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
    
    datadeNascimento.exibir();
}
void Guerreiro::ordenarArmaduraVestida()
{
    if (armaduraVestida == false)
    {
        cout<<"\nSeus guerreiros estao sem suas armaduras.\n Foi ordenado o vestimento da armadura ... \n";
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
