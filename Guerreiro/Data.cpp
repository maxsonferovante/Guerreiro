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

int Data::getday() const{return this->day;}
int Data::getmonth() const{return this->month;}
int Data::getyear() const{return this->year;}
void Data::setday(int d) { this->day = checkday(d); }
void Data::setmonth(int m) { this->month =(m>0 && m<13) ? m : 1; };
void Data::setyear(int y) { this->year =(y>1899) ? y : 1900; };

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
    std::cout<<"\nNascimento: "<<this->day<<"/"<<this->month<<"/"<<this->year<<std::endl;
}