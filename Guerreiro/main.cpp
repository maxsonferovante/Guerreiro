#include<iostream>
#include "Guerreiro.h"


using std::cout;
using std::cin;

int main(){
	Guerreiro g("MigoTiti", 1220, 600, 45, 14, 10, 1994);
    int armor = 40;
    g.exibirAtributos();
    
    g.ataqueFisicodoGuerreiro(armor);
    cout<<"resistencia: "<<armor;
    
    g.ataqueMagicodoGuerreiro(armor);
    cout<<"resistencia: "<<armor;
    
    g.ataqueMagicodoGuerreiro(armor);
    cout<<"resistencia: "<<armor;
    
	return 0;
}