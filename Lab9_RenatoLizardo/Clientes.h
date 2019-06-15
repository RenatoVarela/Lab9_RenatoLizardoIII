#ifndef CLIENTES_H
#define CLIENTES_H
#include <string>
#include <iostream>
#include "Personas.h"

using std::string;

class Clientes:public Personas
{
private:
    string direccion,telefono,tarjeta;
    int pedidos;
    
public:
    Clientes();
    Clientes(string,string,string,int,int,string,string,string);

    string getDireccion();
    string getTelefono();
    string getTarjeta();
    int getPedidos();

    int ganancias();

    int toString();
  
};

#endif
