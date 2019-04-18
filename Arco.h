#ifndef ARCO_H
#define ARCO_H
#include <string>
using std::string;

#include<iostream>
using std::cin;
using std::cout;

class Arco
{
    
public:
    Arco( float = 10.0 );
    ~Arco();
    
    void mostrarTipoArcos();
    
    void setTamanhoArco( float );
    
private:
    const static int sizeArcos  = 3;
    
    static string armasArcos[sizeArcos];
    
    float tamArco;
};

#endif // ARCO_H
