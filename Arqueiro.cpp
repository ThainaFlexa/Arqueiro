#include "Arqueiro.h"

Arqueiro::Arqueiro( int pontos )
{
    
    setJogada( pontos );
    
    
}

Arqueiro::Arqueiro( const string &nome ){
    
    setJogada( nome );
    
}

Arqueiro::~Arqueiro()
{
}

void Arqueiro::setJogada( int pontos )
{
    if( pontos > 0  &&  pontos < 100 )
    {
        pontuacao = pontos;
        cout << "A pontuacao foi verificada com sucesso\n";
    }
    else
        pontuacao = 0;
        
}

void Arqueiro::setJogada(const string &nome){
    id = nome;
    cout << "Nome inserido com sucesso!\n";
}