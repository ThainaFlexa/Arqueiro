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
    Arqueiro arq2(" ");
    string nome;
    
    cout << "Insira seu nome de usuario:";
    cin >> nome;
    
    arq2.setJogada( nome );
    
	return 0;
}
