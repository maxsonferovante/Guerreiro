#include"Guerreiro.h"

Guerreiro::Guerreiro ( string N, int S, int A, int I, int L, int M);{
	void setNomedoGuerreiro (N);
	void setStrenghtdoGuerreiro (S);
	void setAgilitydoGuerreiro (A);
	void setIntelligencedoGuerreiro (I);
	void setLifedoGuerreiro (L);
	void setManadoGuerreiro (M);
}
void Guerreiro::setNomedoGuerreiro ( string nome){
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
	cout<<"O Guerreiro "<<getNomedoGuerreiro()<<" esta treinando suas habilidades...";
	Sleep(2000);
}
bool Guerreiro::regenarGuerreiro (){
	
}
