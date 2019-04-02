#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
using std::string;

#include<iostream>
using std::cout;

class Arqueiro
{


public:
    Arqueiro( int );
    ~Arqueiro();
    
    void setPontos( int );
    
    int numeroDeJogadas();
    
private:
    int pontuacao;


};

#endif // ARQUEIRO_H
