#include "Ordenes.h"

Ordenes::Ordenes()
{
}

Ordenes::Ordenes(Clientes *cliente1, NegociosAsociados *negocio1, Repartidores *repartidor1, Productos *productos1, string tipo1, string estado1)
{
    cliente = cliente1;
    negocio = negocio1;
    repartidor = repartidor1;
    producto = productos1;
    tipo = tipo1;
    estado = estado1;
}

Clientes * Ordenes::getClientes()
{
    return cliente;
}



NegociosAsociados *Ordenes::getNegocios()
{
    return negocio;
}



Repartidores *Ordenes::getRepatidores()
{
    return repartidor;
}


Productos *Ordenes::getProductos()
{
    return producto;
}

string Ordenes::getTipo()
{
    return tipo;
}


string Ordenes::getEstado()
{
    return estado;
}


void Ordenes::setEstado(string estado3){
    estado = estado3;


}


void Ordenes::toString(){
    
}