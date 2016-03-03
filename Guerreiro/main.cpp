#include<iostream>
#include "Guerreiro.h"
#include "Mago.h"

using std::cout;
using std::cin;

int main(){
    Espada *espada = new Espada("adamantium", 1.35, false);
    
	Guerreiro migo("MigoTiti", 21, 4, 1997,espada);
    Mago max("Max", 14, 10, 1994);
    
    migo.adicionarRecompensas(887.9);
    cout<<migo;
    
    max.adicionarRecompensas(456.4);
    cout<<max;
    
    return 0;
}
