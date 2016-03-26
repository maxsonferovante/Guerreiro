#ifndef ESPADA_H
#define ESPADA_H

#include <string>
#include <iostream>

using std::cout;
using std::string;

class Espada
{
public:
    Espada(string = "adamantium", float = 1.25, bool = true);    
    Espada(const Espada &);    
    ~Espada();
    
    void empunharEspada();
    void desempunharEspada();
    void exibirEspada() const;
    
    string getTipodaEspada() const;
    float getComprimentodaEspada() const;
    bool getEmpunhada() const;
    void setTipodaEspada(string);
    void setComprimentodaEspada(float);
    void setEmpunhada(bool);
private:
    string tipodaEspada;
    float comprimentodaEspada;
    bool empunhada;
};

#endif // ESPADA_H
