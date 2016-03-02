#ifndef PERSONAGEM_H
#define PERSONAGEM_H


#include<string>

using std::string;

class Personagem
{
public:
    Personagem(String, int,int,int,int);
    Personagem(Const Personagem &);
    ~Personagem();
    
    void adicionarRecompensas(float);
private:
    String nomedoPersonagem;
    int life;
    int *recompensas;
    int quantidadeRecompensas;
    const Data datadeNascimento;
    const static int IncrementoLife;
    const static int DecrementoLife;

};

#endif // PERSONAGEM_H
