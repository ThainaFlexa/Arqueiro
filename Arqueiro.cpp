#include "Arqueiro.h"

Arqueiro::Arqueiro( int pontos )
{
    
    setPontos( pontos );
    
    
}

Arqueiro::~Arqueiro()
{
}

void Arqueiro::setPontos( int pontos )
{
    if( pontos > 0  &&  pontos < 100 )
    {
        pontuacao = pontos;
        cout << "A pontuação foi verificada com sucesso\n";
    }
    else
        pontuacao = 0;
        
}