#include<iostream>
#include "Guerreiro.hpp"
#include <string>

using std::string;
using std::cout;

int Guerreiro::quantidadedeGuerreiros = 0;

Guerreiro::Guerreiro()
:nomedoGuerreiro("Desconhecido"),strenght(33), agility(33),intelligence(33), life(1200), mana(600),armor(3), damage(33)
{
    
}

Guerreiro::Guerreiro( const string &N, int Li, int Ma, int Da)
:strenght(33), agility(33),intelligence(33),armor(3)
{
        this->nomedoGuerreiro = N;
        if(Li >= 0)
            this->life = Li;
        else
            this->life = 1200;
        
        if(Ma >= 0)
            this->mana = Ma;
        else
            this->mana = 800;
        
        if(Da >= 0)
            this->damage = Da;
        else
            this->damage = 33;
}
Guerreiro::Guerreiro(const Guerreiro &outro){
    this->nomedoGuerreiro = outro.nomedoGuerreiro;
    this->strenght = outro.strenght;
    this->agility = outro.agility;
    this->intelligence = outro.intelligence;
    this->life = outro.life;
    this->mana = outro.armor;
    this->armor = outro.armor;
    this->damage = outro.damage;
}
Guerreiro::~Guerreiro(){
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
	
	this->strenght +=2;
	this->agility +=2;
	this->intelligence +=2;
	this->armor +=2;
	this->damage +=2;
	this->mana -=30;
}
void Guerreiro::regenarGuerreiro (){
	cout<<"\n\nO Guerreiro "<<this->nomedoGuerreiro<<" descansa para gerenear nama gasta no dia, ganha +25 de mana...";
	this->mana +=25;
}

void Guerreiro::ataqueFisicodoGuerreiro (int &resistenciadoInimigo ){
    cout<<"\nO Guerreiro esta atacando fisicamente...\n";
	if ( (this->damage + this->strenght/4) > resistenciadoInimigo)
        resistenciadoInimigo -= this->damage/3;  
    else
        if( (this->damage + this->strenght/4) == resistenciadoInimigo)
            resistenciadoInimigo -= this->damage/5;
        else
            cout<<"\nO Inimigo defendou o ataque fisico...\n";
    
    if (resistenciadoInimigo < 0) resistenciadoInimigo = 0;
}
void Guerreiro::ataqueMagicodoGuerreiro (int &resistenciadoInimigo){
    cout<<"\nO Guerreiro esta atacando magicamente...\n";
    if ( (this->damage + this->intelligence/3) > resistenciadoInimigo)
        resistenciadoInimigo -= this->damage/2;
    else
        if( (this->damage + this->intelligence/3) == resistenciadoInimigo)
            resistenciadoInimigo -= this->damage/4;
        else
            cout<<"\nO Inimigo defendei o ataque magico...\n";
    
    if (resistenciadoInimigo < 0) resistenciadoInimigo = 0;
}
bool Guerreiro::defesadoGuerreiro( int ataquedoInimigo){
    if (this->armor < ataquedoInimigo)
        return false;
    else
        return true;
}
void Guerreiro::alimentarGuerreiro(){
	cout<<"\n\nAo alimentar-se o Guerreiro ganha +13 de mana e +24 de vida";
	this->mana +=13;
	this->life +=24;
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
}