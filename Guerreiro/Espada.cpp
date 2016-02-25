#include<iostream>
#include "Espada.h"

using std::cout;
Espada::Espada(string tipo, float comprimento, bool emp)
{
    this->tipodaEspada = tipo;
    
    if (comprimento > 0)
        this->comprimentodaEspada = comprimento;
    else
        this->comprimentodaEspada = 1.25;
    
    this->empunhada = emp;
}
Espada::Espada(const Espada &outra)
{
    this->tipodaEspada = outra.tipodaEspada;
    this->comprimentodaEspada = outra.comprimentodaEspada;
    this->empunhada = outra.empunhada;
}
Espada::~Espada()
{
}



//this->life = (Li > 0) ? Li : 1200;
string Espada::getTipodaEspada() const {return this->tipodaEspada;}
float Espada::getComprimentodaEspada() const {return this->comprimentodaEspada;}
bool Espada::getEmpunhada() const {return this->empunhada;}

void Espada::setTipodaEspada(string tipo) {this->tipodaEspada = tipo;};
void Espada::setComprimentodaEspada(float compri) {this->comprimentodaEspada = (compri >0) ?compri : 1.25;};
void Espada::setEmpunhada(bool emp) {this->empunhada = emp;};
void Espada::empunharEspada()
{
    if (!this->empunhada)
    {
        this->empunhada = true;
        cout<<"\nEspada empanhada!\n";
    }
    else
        cout<<"\nA espada ja esta empunhada...\n";
}
void Espada::desempunharEspada()
{
        if(!this->empunhada)
        {
            this->empunhada = false;
            cout<<"\nEspada desmpunhada.\n";
        }
        else
            cout<<"\nA espada ja esta desempunhada.\n";
}
void Espada::exibirEspada() const
{
    cout<<"\nTipo da Espada: "<<this->tipodaEspada<<"\nComprimento (metros): "<<this->comprimentodaEspada<<"\nEmpunhada: "<<this->empunhada<<std::endl;
}
