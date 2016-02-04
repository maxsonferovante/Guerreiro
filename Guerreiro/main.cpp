#include<iostream>
#include "Guerreiro.hpp"


using std::cout;
using std::cin;

int main(){
	Guerreiro g("MigoTiti", 1220, 600, 45);
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