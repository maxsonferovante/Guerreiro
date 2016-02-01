#include<iostream>
#include "Guerreiro.hpp"


using std::cout;
using std::cin;

int main(){
	Guerreiro g("maxson", 1220, 600, 45);
    
    g.exibirAtributos();
    
    g.treinarGuerreiro();
    g.alimentarGuerreiro();
    g.regenarGuerreiro();
    
    g.exibirAtributos();
    
    
	return 0;
}