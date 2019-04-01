#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
using std::string;


class Arqueiro
{


public:
    Arqueiro();
    ~Arqueiro();
    
    int numeroDeJogadas();
    
private:
    int pontuacao;


};

#endif // ARQUEIRO_H
