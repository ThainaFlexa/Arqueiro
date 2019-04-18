#ifndef FLECHA_H
#define FLECHA_H
#include <string>
using std::string;

#include<iostream>
using std::cin;
using std::cout;

class Flecha
{
public:
    Flecha( float = 7.0 );
    ~Flecha();

     void mostrarTipoFlechas();
     
     void setTamanhoFlecha ( float );
     
private:
    const static int sizeFlechas  = 3;
    
    static string armasFlechas[sizeFlechas];
    
    float tamFlecha;
};

#endif // FLECHA_H
