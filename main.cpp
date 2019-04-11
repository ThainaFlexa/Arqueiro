#include <stdio.h>
#include "Arqueiro.h"
#include <iostream>
using std::cin;
using std::cout;
#include <string.h>
using std::string;

int main(int argc, char **argv)
{
	printf("Codigo com sucesso!\n");
    
    Arqueiro arq1( 20 );    
    Arqueiro arq2("");
    string nome;
    Arqueiro arq3(1);
    
    arq3.addMortos();
    arq1.addMortos();
    
    cout << "Numero total de mortos: " << arq3.getnumerodeMortos();


    cout << "\nInsira seu nome de usuario:";
    cin >> nome;

    arq2.setJogada( nome );
    
    
    
    int modelo;
    
    cout << "\nInsira o PIN do aparelho a ser habilitado: ";
    cin >> modelo;
    
    arq1.registrarAparelho( modelo );
    
    int cat;
    
    cout << "\nInsira sua categoria no jogo: ";
    cout<< " \n1-Iniciante" <<'\n' <<"2-Mediano" << '\n' <<  "3-Experiente" << '\n';
    cin >> cat;
    
    arq1.selecionarCategoria( cat );
    
    float valor,pag;
    
    cout << "\nVoce precisa comprar os primeiros arcos para comecar a jogar!\n";
    cout<< " \n 70 arcos - R$ 29,50" <<'\n' <<"40 arcos - R$ 19,00" << '\n' << "Insira o valor do pacote desejado: R$ ";
    cin >> valor;
    cout << "Modo de pagamento: \n" << "1 - Gerar Boleto\n" << "2 - Cartao Virtual - Debito/Credito \n";
    cin >> pag;
    
    arq1.adquirirArcos( valor, pag);
    
    int verifica;
    
    cout << "Nos confirme novamente seu numero PIN para continuar o processo [Voce eh um robo?]: \n";
    cin >> verifica;
    
    arq1.confirmarCompra( verifica );
    
    Arqueiro arq4(arq1);
    
	return 0;
}
