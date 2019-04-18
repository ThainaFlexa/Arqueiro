#include "Flecha.h"

string Flecha::armasFlechas[sizeFlechas]={"FlechaDesportivo","FlechaMilitar_Nivel1","FlechaMilitar_Nivel2"};

Flecha::Flecha(float tamf) 
{
    setTamanhoFlecha(tamf);
}

Flecha::~Flecha()
{
}

void Flecha:: mostrarTiposFlecha()
{
    for(int cont=0; cont < sizeFlechas; cont++)
        cout << armasFlechas[cont] << '\n';
}

void Flecha::setTamanhoFlecha ( float tamf )
{
    if( tamf >0 )
        tamFlecha = tamf;
    else
        tamFlecha = 7.0;
}