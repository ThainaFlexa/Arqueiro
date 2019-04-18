#include "Arqueiro.h"

int Arqueiro::numerodeMortos = 0;

//string Arqueiro::armas[sizeArmas]={"ArcodeDesportivo","ArcoMilitar_Nivel1","ArcoMilitar_Nivel2","FlechaDesportivo","FlechaMilitar_Nivel1","FlechaMilitar_Nivel2"};

Arqueiro::Arqueiro( int pontos, float tamFlecha, float tamArco )
: flecha_padrao( tamFlecha ),  arco_padrao ( tamArco )
{
    
    setJogada( pontos );
    
    
}

Arqueiro::Arqueiro( const string &nome )
: flecha_padrao(  ),  arco_padrao ( )
{
    
    setJogada( nome );
    
}

Arqueiro::Arqueiro( float valor, int pag )
: flecha_padrao(  ),  arco_padrao ( )
{
    
    adquirirArcos(valor,pag);
    
}

Arqueiro::Arqueiro(const Arqueiro &arq)
: flecha_padrao(  ),  arco_padrao ( )
{
    pontuacao=arq.pontuacao;
    id=arq.id;
    aparelho=arq.aparelho;
    combos=arq.combos;
    pagamento=arq.pagamento;
    categoria=arq.categoria;
}

Arqueiro::~Arqueiro()
{
}

float Arqueiro::getversaodoJogo()
{
    
    return versao;
}

int Arqueiro::getnumerodeMortos()
{
    
    return numerodeMortos;
}

void Arqueiro::addMortos( )
{
    numerodeMortos++;
    
}

/*void Arqueiro:: mostrarArmas()
{
    for(int count=0; count < sizeArmas; count++)
        cout << armas[count] << '\n';
}
*/
void Arqueiro::setJogada( int pontos )
{
    if( pontos > 0  &&  pontos < 100 && pontos != 1)
    {
        pontuacao = pontos;
        cout << "Pontuacao inicial do jogo: " << pontuacao << " vidas." <<'\n';
    }
    else
        pontuacao = 0;
        
}

void Arqueiro::setJogada(const string &nome){
    if ( nome != "") {
        id = nome;
        cout << "Nome inserido com sucesso!\n";
    }
}

void Arqueiro::registrarAparelho(int modelo){
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

void Arqueiro::adquirirArcos(float valor, int pag){
    if((valor == 29.50 || valor == 19.00) && (pag == 1 || pag == 2))
    {
        combos=valor;
        cout << "Pacote disponibilizado. \n";
        pagamento=pag;
    }
    else
        cout << " Pacote de valor nao disponivel ou Forma de pagamento nao aceita.\n Sua compra nao eh possivel. Porem precisamos confirmar se eh voce realmente.\n";
}
void Arqueiro::confirmarCompra(const int verifica){
    if(verifica == aparelho)
    {
        cout << "\nVerificacao realizada\n" << "\nPIN DE NUMERO " << aparelho << " AUTORIZADO. JOGO HABILITADO!" <<'\n' ;
    }
    else{
        cout << "\n\nACESSO NAO PERMITIDO. CONFIRMACAO FALHOU.\n";
        }
}   
