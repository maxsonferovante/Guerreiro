#include<iostream>
#include "Guerreiro.hpp"
#include <string>

using std::string;
using std::cout;
using std::cin;

Guerreiro::Guerreiro()
:nomedoGuerreiro("Desconhecido"),strenght(33), agility(33),intelligence(33), life(1200), mana(600),armor(3), damage(33)
{
}
Guerreiro::Guerreiro( const string &N, int Li, int Ma, int Da)
:strenght(33), agility(33),intelligence(33),armor(3), damage(33)
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

string Guerreiro::getNomedoGuerreiro (){
	return this->nomedoGuerreiro;	
}
int Guerreiro::getStrenghtdoGuerreiro (){
	return this->strenght;
}
int Guerreiro::getAgilitydoGuerreiro (){
	return this->agility;
}
int Guerreiro::getIntelligencedoGuerreiro (){
	return this->intelligence;
}
int Guerreiro::getLifedoGuerreiro (){
	return this->life;
}
int Guerreiro::getManadoGuerreiro (){
	return this->mana;
}
int Guerreiro::getArmorGuerreiro(){
	return this->armor;
}
int Guerreiro::getDamageGuerreiro(){
	return this->damage;
}
void Guerreiro::treinarGuerreiro (){
	cout<<"\n\nTodos os dias o Guerreiro "<<getNomedoGuerreiro()<<" treina cada um de seus atributos...";
	cout<<"\nO treino foi concluido e o Guerreiro ganhou +2 em cada atributo e gastou 30 de mana.\nDescanse agora!";
	
	this->strenght +=2;
	this->agility +=2;
	this->intelligence +=2;
	this->armor +=2;
	this->damage +=2;
	this->mana -=30;
}
void Guerreiro::regenarGuerreiro (){
	cout<<"\n\nO Guerreiro "<<getNomedoGuerreiro()<<" descansa para gerenear nama gasta no dia, mas pelo descanso ganha +25 de mana...";
	this->mana +=25;
	}
void Guerreiro::atacarGuerreiro (){
	cout<<"\n\nNas lutas o Guerreiro perde 45 de mana e sua vida é compremetida em 25%...\n O Guerreiro esta luntando...";
	this->mana -=45;
	this->life = life - life/4;
}
void Guerreiro::alimentarGuerreiro(){
	cout<<"\n\nAo alimentar-se o Guerreiro ganha +13 de mana e +24 de vida";
	this->mana +=13;
	this->life +=24;
}
void Guerreiro::exibirAtributos(){
    cout<<"\n\nNome: "<<this->nomedoGuerreiro;
    cout<<"\nStrenght: "<<this->strenght;
    cout<<"\nAgility: "<<this->agility;
    cout<<"\nIntelligence: "<<this->intelligence;
    cout<<"\nLife: "<<this->life;
    cout<<"\nMana: "<<this->mana;
    cout<<"\nArmor: "<<this->armor;
    cout<<"\nDamage: "<<this->damage;
    }