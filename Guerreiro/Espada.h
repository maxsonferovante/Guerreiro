#ifndef ESPADA_H
#define ESPADA_H

#include<string>

using std::string;

class Espada
{
public:
    Espada(string = "adamantium", float = 1.25, bool = false);    
    Espada(const Espada &);    
    ~Espada();
    
    void empunharEspada();
    void desempunharEspada();
    void exibirEspada() const; 
private:
    string tipodaEspada;
    float comprimentodaEspada;
    bool empunhada;
};

#endif // ESPADA_H
