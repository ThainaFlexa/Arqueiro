#include "Arco.h"

string Arco::armasArcos[sizeArcos]={"ArcodeDesportivo","ArcoMilitar_Nivel1","ArcoMilitar_Nivel2"};

Arco::Arco( float tam) 
{
    setTamanhoArco(tam);
}

Arco::~Arco()
{
}

void Arco:: mostrarTiposArcos()
{
    for(int count=0; count < sizeArcos; count++)
        cout << armasArcos[count] << '\n';
}

void Arco::setTamanhoArco(float tam)
{
    if( tam >0 )
        tamArco = tam;
    else
        tamArco = 10.0;
}