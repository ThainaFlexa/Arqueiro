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
    Arqueiro ( float , int );
    Arqueiro(const Arqueiro &);
    
    ~Arqueiro();
    
    void setJogada ( const string & );
    
    void confirmarCompra (const int);
    
    void setJogada( int );
    
    int jogar( int );
    
    string jogar (string);
    
    void registrarAparelho (int);
    
    void adquirirArcos(float,int);
    
    void selecionarCategoria (int);
    
    void addMortos( );
    
    static int getnumerodeMortos();
    
    int getnumerodeFases();
    
private:
    int pontuacao;
    string id;
    int aparelho;
    float combos;
    int pagamento;
    int categoria;
    const static int numerodeFases = 4;
    static int numerodeMortos;
};

#endif // ARQUEIRO_H
