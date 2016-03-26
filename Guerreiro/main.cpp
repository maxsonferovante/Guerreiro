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
    vector < Personagem *> personagens;
    int op, player = 1, cenario;
    string nome;
    srand (time(NULL));
    
    do{
        cout<<"\n 1 - Para O Mago \n 2 - Para o Espartano ";
        cout<<"\n\nEscolha seu personagem, player "<< player <<": ";
        cin>> op;
        switch (op)
        {
            case 1:
            {
                cout<<"\nEscolha o nome do personagem-mago: ";
                cin>>nome;
                personagens.push_back(new Gandalf(nome,21,01,1333,25));
                player++;
            }break;
            
            case 2:
            {
                cout<<"\nEscolha o nome do personagem-espartano: ";
                cin>>nome;
                personagens.push_back(new Espartano(1,nome,12,02,300,new Espada()));            
                player++;
            }break;
            default:
                cout<<"\nOption not found...\n";
                break;
        }
    }while(player <3);
    system("pause");
    system("cls");
    cout<<"\n\nAgora sera escolhido o cenario para batalha.\nHa um cenario favoravel para cada um dos personagens,"
        <<" mas um no qual ninguem tem vantagens..."
        <<"\nO cenario eh escolhido aleatoriamente.";
        
    cenario = rand()%3; // Escolha do cenario de forma aleatoria.
    switch(cenario)
    {
        case 0:
        {
            cout<<"\n\nO cenario escolhido foi a Terra-media,";
            cout<<"\no mago ganha um bonus de x2 no seu xp."<<std::endl;
            for (int i = 0;i<personagens.size(); i++)
            {
                Gandalf *gandalfPtr = dynamic_cast < Gandalf *> (personagens[i]);
                if (gandalfPtr !=0)
                    gandalfPtr->aumentarXp(2);
            }   
        }break;
        case 1:
        {
            cout<<"\n\nO cenario escolhido foi o Monte Olimpio,";
            cout<<"\no espartano ganha um bonus de x2 no seu xp."<<std::endl;
            for (int i = 0;i<personagens.size(); i++)
            {
                Espartano *espartanoPtr = dynamic_cast < Espartano *> (personagens[i]);
                if (espartanoPtr !=0)
                    espartanoPtr->aumentarXp(2);
            }   
        }break;
        case 2:
        {
            cout<<"\n\nO cenario escolhido foi as margens o Rio de Estige.";
            cout<<"\nAmbos os personagens irao sofrer perdas em suas vidas no valor de 150 pontos incialmente ";
            cout<<"\ne ao longo do confronto 30 pontos a cada rodada."<<std::endl;
            for (int i = 0;i<personagens.size(); i++)
            {
                Espartano *espartanoPtr = dynamic_cast < Espartano *> (personagens[i]);
                Gandalf *gandalfPtr = dynamic_cast < Gandalf *> (personagens[i]);
                if (espartanoPtr !=0)
                    espartanoPtr->setLife( espartanoPtr->getLife() -150 );
                else
                    gandalfPtr->setLife( gandalfPtr->getLife() - 150 );
            }
        }break;
    
    }
    
    system("pause");
    system("cls");
/*        
    cout<<"\nO confronto consiste em ataques alternados. O primeiro a ter seus pontos de vida zerados, perde.";
    cout<<"\nCada personagem pode atacar duas com dano dublo, mas tera 10% da vida consumida com o dano dublo.";
    cout<<"\nCom isso, inicia-se o confronto....!!!!!!!!"<<std::endl;
    
    system("pause");
    system("cls");
  
    
    do
    {
            cout<<"1 - Ataque Fisico";
            cout<<"2 - Ataque com a Espada";
            cin op;
            switch (op)
            {
                case 1:
                {
                    
                }break;
            }
    }while(true);
    */    
    for (int i = 0; i< personagens.size(); i++)
    {
        cout << "\n\ndeleting object of  "<< typeid( *personagens[ i ] ).name() << std::endl;
        delete personagens[ i ];
    }

    return 0;
}
