#include "guerreiro.h"
#include <string>
Guerreiro::Guerreiro( std::string N, int S, int A, int I, int L, int M){
	setNomedoGuerreiro (N);
	setStrenghtdoGuerreiro (S);
	setAgilitydoGuerreiro (A);
 	setIntelligencedoGuerreiro (I);
	setLifedoGuerreiro (L);
	setManadoGuerreiro (M);
}
void Guerreiro::setNomedoGuerreiro ( std::string nome){
	nomedoGuerreiro = nome;
}
void Guerreiro::setStrenghtdoGuerreiro ( int S){
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
void Guerreiro::treinarGuerreiro (){
	cout<<"\nTodos os dias o Guerreiro "<<getNomedoGuerreiro()<<" treina cada um de seus atributos...";
	cout<<"\nO treino foi concluido e o Guerreiro ganhou +2 em cada atributo e gastou 30 de mana.\nDescanse agora!";
	
	/*Duvida se eu posso trabalhar diretamente com os atributos do objeto dentro dos métodos pertencentes a sua classe.*/
	strenght +=2;
	agility +=2;
	intelligence +=2;
	mana -=30;
}
void Guerreiro::regenarGuerreiro (){
	cout<<"O Guerreiro "<<getNomedoGuerreiro()<<" descansa para gerenear nama gasta no dia, mas pelo descanso ganha +25 de mana...";
	mana +=25;
	}
bool Guerreiro::lutarGuerreiro (){
	cout<<"Nas lutas o Guerreiro perde 45 de mana e sua vida é compremetida em 25%...\n O Guerreiro esta luntando...";
	mana -=45;
	life = life - life/4;
}
bool Guerreiro::alimentarGuerreiro(){
	cout<<"Ao alimentar-se o Guerreiro ganha +13 de mana e +24 de vida";
	mana +=13;
	life +=24;
}
