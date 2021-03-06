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
    
    Arqueiro arq1( 20 , 7.0 , 10.0 );    
    Arqueiro arq2("");
    string nome;
    Arqueiro arq3( 1, 7.0 , 10.0 );
    
    arq1.addMortos();
    arq2.addMortos();
    
    cout << "Numero total de mortos no jogo: " << Arqueiro::getnumerodeMortos() << '\n';
    
    cout << "\nVersao do jogo -- " << arq1.getversaodoJogo() << '\n';

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
    
    
    //cout << "\nInstalando configuracoes...\n" << "\nArmas disponiveis durante o jogo:\n";
    
    //arq2.mostrarArmas();
    
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
