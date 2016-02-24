#include<iostream>
#include "Guerreiro.h"

using std::cout;
using std::cin;

int main(){
    Espada *espada1 = new Espada("adamantium", 1.35, false);
    Espada *espada2 = new Espada("valiriano", 1.25, true);
    
	Guerreiro migo("MigoTiti", 1000, 300, 25, 21, 4, 1997,espada1);
    Guerreiro max("Max", 1220, 600, 45, 14, 10, 1994,espada2);

    int armor = 40;
    
    migo.adicionarRecompensas(887.9);
    migo.exibirAtributos();
    
    max.adicionarRecompensas(456.4);
    max.exibirAtributos();
    
    migo.ataqueEspadaGuerreiro(armor);
    cout<<"\n\nResistencia do Inimigo apos o ataque com a espada do Guerreiro "<<migo.getNomedoGuerreiro()<<": "<<armor<<std::endl;
    
    max.ataqueFisicodoGuerreiro(armor);
    cout<<"\n\nResistencia do Inimigo apos o ataque magico do Guerreiro "<<max.getNomedoGuerreiro()<<": "<<armor<<std::endl;
        
	return 0;
}
