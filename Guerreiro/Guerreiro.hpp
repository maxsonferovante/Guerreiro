#pragma once
#include<string>

using std::string;

class Guerreiro
{
public:
	Guerreiro();
	Guerreiro (const string &, int, int, int);
	~Guerreiro();
		
	void treinarGuerreiro ();
	void regenarGuerreiro ();
	void atacarGuerreiro ();
	void alimentarGuerreiro();
    void exibirAtributos();
    
    void setNomedoGuerreiro ( string );
	void setStrenghtdoGuerreiro ( int );
	void setAgilitydoGuerreiro ( int );
	void setIntelligencedoGuerreiro ( int );
	void setLifedoGuerreiro ( int );
	void setManadoGuerreiro ( int );
	void setArmorGuerreiro ( int );
	void setDamageGuerreiro ( int );
		
	string getNomedoGuerreiro ();
	int getStrenghtdoGuerreiro ();
	int getAgilitydoGuerreiro ();
	int getIntelligencedoGuerreiro ();
	int getLifedoGuerreiro ();
	int getManadoGuerreiro ();
	int getArmorGuerreiro ();
	int getDamageGuerreiro ();
	
private:
	string nomedoGuerreiro;
	int strenght;
	int agility;
	int intelligence;
	int life;
	int mana;
	int armor;
	int damage;
};

