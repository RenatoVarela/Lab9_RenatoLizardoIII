#include "Clientes.h"
using namespace std;


Clientes::Clientes():Personas()
{
}

Clientes::Clientes(string nombre1, string identidad1, string edad1, int ganancias1, int pedidos1, string direccion1, string telefono1, string tarjeta1) : Personas(nombre1, identidad1, edad1, ganancias1)
{
    
    pedidos = pedidos1;
    direccion = direccion1;
    telefono = telefono1;
    tarjeta = tarjeta1;
}

string Clientes::getDireccion()
{
    return direccion;
}



string Clientes::getTelefono()
{
    return telefono;
}


string Clientes::getTarjeta()
{
    return tarjeta;
}



int Clientes::getPedidos()
{
    return pedidos;
}


int Clientes::ganancias(){
    int ganancia =0;

    ganancia = pedidos*(-100);

    return ganancia;
}


int Clientes::toString(){
    Personas::toString();
    cout<<"Pedidos:"<<pedidos<<" direccion:"<<direccion << " telefono:"<<telefono <<" Tarjeta"<<tarjeta <<endl;
    return 0;
}