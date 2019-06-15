#include "Productos.h"

Productos::Productos()
{
}

Productos::Productos(string nombre1, string tipo1)
{
    nombre = nombre1;
    tipo = tipo1;
}

string Productos::getNombre()
{
    return nombre;
}


string Productos::getTipo()
{
    return tipo;
}