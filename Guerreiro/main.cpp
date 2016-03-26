#include <iostream>
#include <vector>
#include <typeinfo>
#include <stdlib.h>
#include <time.h>
#include "Personagem.h"

#include "Espada.h"
#include "Espartano.h"
#include "Gandalf.h"

using std::cout;
using std::cin;
using std::vector;

int main(){
    srand (time(NULL));
    
    vector < Personagem *> personagens;
    int op, sorteado, cenario;
    sorteado = rand()%2;
    cenario = rand()%3;
    
    cout<<"\nHa um sorteio para decidir a ordem de escolha do personagens.\nO player escolhido poderá escolher seu personagem.\n";
    
    do{
        cout<<"\n 0 - Para O Mago Gandalf\t 1 - Para o Guerreiro Kratos.";
        cout<<"\nEscolha seu personagem, player "<< sorteado+1 <<":";
        cin>> op;
        switch (op)
        {
            case 0:
            {
                personagens.push_back(new Gandalf("Gandalf",21,01,1333,25));
                personagens.push_back(new Espartano(1,"Kratos",29,02,300,new Espada()));            
                op = 5;
            }break;
            
            case 1:
            {
                personagens.push_back(new Espartano(1,"Kratos",29,02,300,new Espada()));            
                personagens.push_back(new Gandalf("Gandalf",21,01,1333,25));
                op = 5;
            }break;
            default:
                cout<<"Opcao invalida.";
                system("cls");
        }
    }while(op!=5);
    
    
    for (int i = 0;i<personagens.size(); i++)
    {
        Gandalf *gandalfPtr = dynamic_cast < Gandalf *> (personagens[i]);
        if (gandalfPtr !=0)
        {
            gandalfPtr->aumentarXp();
            gandalfPtr->aumentarXp();
            cout<<"\nNovo Xp do Personagem "<<gandalfPtr->getNome()<<" eh "<<gandalfPtr->getXp();
        }
        cout<<"\nO Xp do Personagem "<<personagens[i]->getNome()<<" eh "<<personagens[i]->getXp();
    }
    
    
    for (int i = 0; i< personagens.size(); i++)
    {
        cout << "\ndeleting object of  "<< typeid( *personagens[ i ] ).name() << std::endl;
        delete personagens[ i ];
    }
    
    return 0;
}
