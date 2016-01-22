#include<iostream>
#include "Guerreiro.h"

using std::string;
using std::cout;
using std::cin;

int main{
	Guerreiro g = Guerreiro();

	g.setNomedoGuerreiro("maxson");
	cout<<g.getNomedoGuerreiro();

	return 0;
}