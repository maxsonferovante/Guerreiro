#include <iostream>
#include "Data.h"

Data::Data(int d, int m, int a)
{
        this->year = a;
        this->month = m;
        this->day = checkday(d);
}
Data::Data(const Data &outra)
{
    this->day = outra.day;
    this->month = outra.month;
    this->year = outra.year;
}

Data::~Data()
{
}
int Data::checkday(int dia) const
{
    static const int diasPorMes [ 13 ] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (dia >0 && dia <= diasPorMes[this->month])
        return dia;
    if (this->month == 2 && dia == 29 && (this->year%400==0 || (this->year%4 == 0 && this->year %100 != 0)))
        return dia;
    std::cout<<"Dia Invalido.\n";
    return 1;
}
void Data::exibirData() const
{
    std::cout<<"Nascimento: "<<this->day<<"/"<<this->month<<"/"<<this->year<<std::endl;
}