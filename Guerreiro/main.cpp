#include<iostream>
#include "Personagem.h"
#include "Espada.h"
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
    cout<<"passei daqui";
    max.adicionarRecompensas(456.4);
    //cout<<max;
    cout<<"passei daqui novamente";

    return 0;
}
