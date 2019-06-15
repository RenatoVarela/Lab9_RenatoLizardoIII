#ifndef PRODUCTOS_H
#define PRODUCTOS_H
#include <string>
#include <iostream>


using std::string;


class Productos
{
private:
    string nombre, tipo;
public:

    Productos();
    Productos(string,string);

    string getNombre();
    string getTipo();
    
    
};

#endif
