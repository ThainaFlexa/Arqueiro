#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
using std::string;


class Arqueiro
{


public:
    Arqueiro();
    int numeroDeJogadas();
    ~Arqueiro();
    
private:
    int pontuacao;


};

#endif // ARQUEIRO_H
