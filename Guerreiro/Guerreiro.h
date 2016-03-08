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
    friend ostream & operator<<(ostream &, const Guerreiro &);
public:
    Guerreiro(Espada *);
    Guerreiro(const string &, int, int, int , Espada *);

    Guerreiro(const Guerreiro &);

    ~Guerreiro();

    void treinarGuerreiro();
    void regenerarGuerreiro();
    void alimentarGuerreiro();
    void exibirAtributos() const;

    void ataqueFisicodoGuerreiro(int&);
    void ataqueMagicodoGuerreiro(int&);
    bool defesadoGuerreiro(int);
    void ataqueEspadaGuerreiro(int &);
    
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
    
    const Guerreiro &operator=(const Guerreiro &);
    bool operator==(const Guerreiro &) const;
private:
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