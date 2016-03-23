#include<iostream>
#include "Personagem.h"
#include "Espada.h"
#include "Guerreiro.h"
#include "Mago.h"
#include "Espartano.h"
#include "Gandalf.h"

using std::cout;
using std::cin;

int main(){
    Espada *espada = new Espada();
    Espartano danny(1,"Caloteira",29,02,1996,espada);
    
    Gandalf lucas("Migo",21,04,1997,100);

    cout<<lucas;

    cout<<danny;
    
    delete espada; // FAZENDO O QUE NUNCA FIZ AQUI NO MAIN.
    return 0;
}
