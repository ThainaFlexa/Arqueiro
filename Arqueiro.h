#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
using std::string;

#include<iostream>
using std::cin;
using std::cout;

#include "Intern.h"

class Arqueiro
{

    
public:
    Arqueiro( int );
    Arqueiro( const string & );
    Arqueiro ( float , int );
    Arqueiro( const Arqueiro & );
    
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
    
    float getversaodoJogo();
    
    void mostrarArmas();
    
private:
    int pontuacao;
    string id;
    int aparelho;
    float combos;
    int pagamento;
    int categoria;
    const static float versao = 7.2;
    static int numerodeMortos;
    const static int sizeArmas  = 6;
    static string armas[sizeArmas];
};

#endif // ARQUEIRO_H
