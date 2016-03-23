#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include <iostream>
#include <windows.h>
#include "Espada.h"
#include "Personagem.h"

using std::string;
using std::ostream;
using std::cout;

class Guerreiro: public Personagem
{
public:
    Guerreiro(Espada *);
    Guerreiro(const string &, int, int, int , Espada *);

    ~Guerreiro();

    void treinarGuerreiro();
    void regenerarGuerreiro();
    void alimentarGuerreiro();
    void exibirAtributos() const;

    virtual void ataqueFisicodoGuerreiro(int &) = 0;
    virtual void defesadoGuerreiro(int &) =0 ;
    
    void ataqueEspadaGuerreiro(int &);
    
    void adicionarRecompensas(float);
    void aumentarXp();
    
    static void ordenarArmaduraVestida();
    static void desordenarArmaduraVestida();


    void setStrenghtdoGuerreiro(int);
    void setAgilitydoGuerreiro(int);
    void setIntelligencedoGuerreiro(int);

    void setManadoGuerreiro(int);
    void setArmorGuerreiro(int);

    int getStrenghtdoGuerreiro() const;
    int getAgilitydoGuerreiro() const;
    int getIntelligencedoGuerreiro() const;
    int getManadoGuerreiro() const;
    int getArmorGuerreiro() const;
    
protected:
    int strenght;
    int agility;
    int armor;
    Espada *espadadoGuerreiro;
    
    static bool armaduraVestida;
    
    const static int IncrementoStrenght;
    const static int IncrementoAgility;
    const static int IncrementoIntelligence;
    const static int IncrementoMana;
    const static int IncrementoArmor;
    const static int IncrementoDamage;
    const static int DecrementoMana;

    static int quantidadedeGuerreiros;
};
#endif