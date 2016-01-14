#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

class Guerreiro
{
	private:
		int strenght;
		int agility;
		int intelligence;
		int life;
		int mana;
		string nomedoGuerreiro;
		
		const int strenghtMaxima = 100;
		const int agilityMaxima = 100;
		const int intelligenceMaxima = 100;
		const int lifeMaxima = 100;
		const int manaMaxima = 100;
	public:
		Guerreiro ( string, int, int, int, int, int, int);
		void setNomedoGuerreiro ( string );
		void setStrenghtdoGuerreiro ( int );
		void setAgilitydoGuerreiro ( int );
		void setIntelligencedoGuerreiro ( int );
		void setLifedoGuerreiro ( int );
		void setManadoGuerreiro ( int );
		
		string getNomedoGuerreiro ();
		int getStrenghtdoGuerreiro ();
		int getAgilitydoGuerreiro ();
		int getIntelligencedoGuerreiro ();
		int getLifedoGuerreiro ();
		int getManadoGuerreiro ();
		
		void treinarGuerreiro ();
		bool regenarGuerreiro ();
};
