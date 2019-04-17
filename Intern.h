#ifndef INTERN_H
#define INTERN_H
#include <string>
using std::string;

#include<iostream>
using std::cin;
using std::cout;

class Intern
{
public:
    Intern( int ) ;
    ~Intern();
    
    void inform( int );
    //int setConfig() const;
    
private:
    int cod;
    int codigoTema;
};

#endif // INTERN_H
