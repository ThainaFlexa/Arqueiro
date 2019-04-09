#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
using std::string;

#include<iostream>
using std::cin;
using std::cout;

class Arqueiro
{


public:
    Arqueiro( int );
    Arqueiro( const string & );
    ~Arqueiro();
    
    void setJogada ( const string & );
    
    void setJogada( int );
    
    int jogar( int );
    
    string jogar (string);
    
private:
    int pontuacao;
    string id;

};

#endif // ARQUEIRO_H
