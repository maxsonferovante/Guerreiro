#include<iostream>
#include "Guerreiro.hpp"


using std::cout;
using std::cin;

int main(){
	Guerreiro g("MigoTiti", 1220, 600, 45);
    int resistencia = 50;
    g.exibirAtributos();
    
    g.ataqueFisicodoGuerreiro(resistencia);
    cout<<"resistencia: "<<resistencia;
    
    g.ataqueMagicodoGuerreiro(resistencia);
    cout<<"resistencia: "<<resistencia;
    
    g.ataqueMagicodoGuerreiro(resistencia);
    cout<<"resistencia: "<<resistencia;
    
	return 0;
}