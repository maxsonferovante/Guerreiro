#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include "Data.h"
#include "Espada.h"

using std::string;

class Guerreiro
{
public:
    Guerreiro(Espada *);
    Guerreiro(const string&, int, int, int, int, int, int , Espada *);
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
    
    void adicionarRecompensas(float );

    void setNomedoGuerreiro(string);
    void setStrenghtdoGuerreiro(int);
    void setAgilitydoGuerreiro(int);
    void setIntelligencedoGuerreiro(int);
    void setLifedoGuerreiro(int);
    void setManadoGuerreiro(int);
    void setArmorGuerreiro(int);
    void setDamageGuerreiro(int);

    string getNomedoGuerreiro() const;
    int getStrenghtdoGuerreiro() const;
    int getAgilitydoGuerreiro() const;
    int getIntelligencedoGuerreiro() const;
    int getLifedoGuerreiro() const;
    int getManadoGuerreiro() const;
    int getArmorGuerreiro() const;
    int getDamageGuerreiro() const;

private:
    string nomedoGuerreiro;
    int strenght;
    int agility;
    int intelligence;
    int life;
    int mana;
    int armor;
    int damage;
    const Data datadeNascimento;
    Espada *espadadoGuerreiro;
    
    float *recompensas;
    int quantidadeRecompensas;
    static bool armaduraVestida;
    
    const static int IncrementoStrenght;
    const static int IncrementoAgility;
    const static int IncrementoIntelligence;
    const static int IncrementoLife;
    const static int IncrementoMana;
    const static int IncrementoArmor;
    const static int IncrementoDamage;
    const static int DecrementoLife;
    const static int DecrementoMana;

    static int quantidadedeGuerreiros;
};
#endif