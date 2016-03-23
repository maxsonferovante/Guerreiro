#include <iostream>
#include <vector>
#include <typeinfo>
#include "Personagem.h"

#include "Espada.h"
#include "Espartano.h"
#include "Gandalf.h"

using std::cout;
using std::cin;
using std::vector;

int main(){
    vector < Personagem *> personagens;
    personagens.push_back(new Espartano(1,"Caloteira",29,02,1996,new Espada()));
    personagens.push_back(new Espartano(2,"Migo",21,04,1997,new Espada()));
    personagens.push_back(new Espartano(1,"Mexson",14,10,1994,new Espada()));
    
    personagens.push_back(new Gandalf("Tavares",12,12,1212,50));    
    personagens.push_back(new Gandalf("Antonio",21,01,1333,25));    
    
    for (int i=0; i<personagens.size(); i++)
    {
        Gandalf *gandalfPtr = dynamic_cast < Gandalf *> (personagens[i]);
        if (gandalfPtr !=0)
        {
            gandalfPtr->aumentarXp();
            cout<<"\nNovo Xp do Personagem "<<gandalfPtr->getNome()<<" eh "<<gandalfPtr->getXp();
        }
        cout<<"\nO Xp do Personagem "<<gandalfPtr->getNome()<<" eh "<<gandalfPtr->getXp();
    }
    
    for (int i =0; i<personagens.size(); i++)
    {
        cout<<"\n deletando os objetos do"<<typeid( *personagens[i] ).name();
        delete personagens[i];
    }
    
    return 0;
}
