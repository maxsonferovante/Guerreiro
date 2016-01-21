#include "guerreiro.h"
#include <string>

Guerreiro::Guerreiro(){
	setNomedoGuerreiro ("Sem nome");
	setStrenghtdoGuerreiro (30);
	setAgilitydoGuerreiro (35);
 	setIntelligencedoGuerreiro (20);
	setLifedoGuerreiro (1000);
	setManadoGuerreiro(800);

};
Guerreiro::Guerreiro( std::string N, int S, int A, int I, int L, int M){
	setNomedoGuerreiro (N);
	setStrenghtdoGuerreiro (S);
	setAgilitydoGuerreiro (A);
 	setIntelligencedoGuerreiro (I);
	setLifedoGuerreiro (L);
	setManadoGuerreiro (M);
}
void Guerreiro::setNomedoGuerreiro ( std::string nome){
	
}

void Guerreiro::setStrenghtdoGuerreiro ( int S){
	if ()
	strenght = S;
}
void Guerreiro::setAgilitydoGuerreiro ( int A){
	agility = A;
}
void Guerreiro::setIntelligencedoGuerreiro ( int I){
	intelligence = I;
}
void Guerreiro::setLifedoGuerreiro ( int L){
	life = L;
}
void Guerreiro::setManadoGuerreiro ( int M){
	mana = M;
}
void Guerreiro::setArmorGuerreiro( int ar){
	armor = ar;
}
void Guerreiro::setDamageGuerreiro( int da){
	damage = da;
}

string Guerreiro::getNomedoGuerreiro (){
	return nomedoGuerreiro;	
}
int Guerreiro::getStrenghtdoGuerreiro (){
	return strenght;
}
int Guerreiro::getAgilitydoGuerreiro (){
	return agility;
}
int Guerreiro::getIntelligencedoGuerreiro (){
	return intelligence;
}
int Guerreiro::getLifedoGuerreiro (){
	return life;
}
int Guerreiro::getManadoGuerreiro (){
	return mana;
}
int Guerreiro::getArmorGuerreiro(){
	return armor;
}
int Guerreiro::getDamageGuerreiro(){
	return damage;
}
void Guerreiro::treinarGuerreiro (){
	cout<<"\nTodos os dias o Guerreiro "<<getNomedoGuerreiro()<<" treina cada um de seus atributos...";
	cout<<"\nO treino foi concluido e o Guerreiro ganhou +2 em cada atributo e gastou 30 de mana.\nDescanse agora!";
	
	strenght +=2;
	agility +=2;
	intelligence +=2;
	armor +=2;
	damage +=2;
	mana -=30;
}
void Guerreiro::regenarGuerreiro (){
	cout<<"O Guerreiro "<<getNomedoGuerreiro()<<" descansa para gerenear nama gasta no dia, mas pelo descanso ganha +25 de mana...";
	mana +=25;
	}
bool Guerreiro::atacarGuerreiro (){
	cout<<"Nas lutas o Guerreiro perde 45 de mana e sua vida é compremetida em 25%...\n O Guerreiro esta luntando...";
	mana -=45;
	life = life - life/4;
}
bool Guerreiro::alimentarGuerreiro(){
	cout<<"Ao alimentar-se o Guerreiro ganha +13 de mana e +24 de vida";
	mana +=13;
	life +=24;
}
