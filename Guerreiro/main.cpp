#include<iostream>
#include "Guerreiro.h"

using std::cout;
using std::cin;

int main(){
    Espada *espada1 = new Espada("adamantium", 1.35, false);
    Espada *espada2 = new Espada("valiriano", 1.25, true);
    
	Guerreiro migo("MigoTiti", 1000, 300, 25, 21, 4, 1997,espada1);
    Guerreiro max("Max", 1220, 600, 45, 14, 10, 1994,espada2);
    
    migo.adicionarRecompensas(887.9);
    cout<<migo;
    
    max.adicionarRecompensas(456.4);
    max.exibirAtributos();
    
    if (max==migo)
        cout<<"\nGuerreiros iguas.\n";
    else
        cout<<"\nGuerreiros diferentes.\n";
    
    max = migo;
    
    if (max==migo)
        cout<<"\nGuerreiros iguas.\n";
    else
        cout<<"\nGuerreiros diferentes.\n";    
	return 0;
}
