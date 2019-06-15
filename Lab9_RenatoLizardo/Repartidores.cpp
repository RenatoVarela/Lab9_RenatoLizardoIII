#include "Repartidores.h"

using namespace std;

Repartidores::Repartidores():Personas()
{
}

Repartidores::Repartidores(string nombre1, string identidad1, string edad1, int ganancias1, int ordenes1, string placa1, string zonaTra1) : Personas(nombre1, identidad1, edad1, ganancias1)
{
    ordenes = ordenes1;
    placa = placa1;
    zonaTra = zonaTra1;
}

string Repartidores::getPlaca()
{
    return placa;
}



string Repartidores::getZonaTra()
{
    return zonaTra;
}



int Repartidores::getOrdenes()
{
    return ordenes;
}

int Repartidores::ganancias(){
    int ganancias = 0;

    ganancias = 40*ordenes;


    return ganancias;


}

int Repartidores::toString(){
    Personas::toString();
    cout<<"Ordenes Pedidas:"<<ordenes <<" NUmero de placa:"<<placa << " Zona Trabajo favorita:"<<zonaTra <<endl;
    return 0;
}