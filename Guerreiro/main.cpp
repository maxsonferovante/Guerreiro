#include<iostream>
#include "Guerreiro.h"


using std::cout;
using std::cin;

int main(){
	Guerreiro migo("MigoTiti", 1000, 300, 25, 21, 4, 1997);
    Guerreiro max("Max", 1220, 600, 45, 14, 10, 1994);

    int armor = 40;

    migo.exibirAtributos();
    max.exibirAtributos();

    Guerreiro::ordenarArmaduraVestida();
    Guerreiro::desordenarArmaduraVestida();
    
        
	return 0;
}