#ifndef ORDENES_H
#define ORDENES_H
#include "Clientes.h"
#include "NegociosAsociados.h"
#include "Repartidores.h"



class Ordenes
{
private:

    Clientes * cliente;
    NegociosAsociados* negocio;
    Repartidores* repartidor;
    Productos* producto;
    string tipo;
    string estado;
    
public:
    Ordenes();
    Ordenes(Clientes*,NegociosAsociados*,Repartidores*,Productos*,string,string);

    Clientes* getClientes();
    NegociosAsociados* getNegocios();
    Repartidores* getRepatidores();
    Productos* getProductos();
    string getTipo();
    string getEstado();
    void setEstado(string);

    void toString();
    
};

#endif
