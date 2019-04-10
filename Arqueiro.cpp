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

void Arqueiro::registroAparelho(int modelo){
    aparelho = modelo;
    cout<<"Aparelho habilitado com sucesso!\n";
}

void Arqueiro::selecionarCategoria(int cat){
    if(cat > 0 && cat < 4){
        categoria=cat;
        cout << "Categoria inserida!\n";
    }
    else{
        categoria=0;
        cout << "categoria invalida!\n";
    }
}

void Arqueiro::adquirirArcos(float valor){
    if (valor == 29.50 || valor == 19.00 )
    {
        combos=valor;
        cout << "Pacote disponibilizado. \n";
    }
    else
        cout << "Pacote de valor nao disponivel. Sua compra nao eh possivel. Porem precisamos confirmar se eh voce realmente.\n";
}
void Arqueiro::confirmaCompra(const int verifica){
    if(verifica == aparelho)
    {
        cout << "\nVerificacao realizada\n" << "\nPIN DE NUMERO " << aparelho << " AUTORIZADO. DIVIRTA-SE!" <<'\n' ;
    }
    else{
        cout << "\n\nACESSO NAO PERMITIDO. CONFIRMACAO FALHOU.\n";
        }
}   
