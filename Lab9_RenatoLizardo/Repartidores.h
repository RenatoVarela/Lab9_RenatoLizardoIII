#ifndef REPARTIDORES_H
#define REPARTIDORES_H
#include <string>
#include <iostream>
#include "Personas.h"

using std::string;

class Repartidores:public Personas
{
private:
    string placa,zonaTra;
    int ordenes;
public:
    Repartidores(/* args */);
    Repartidores(string,string,string,int,int,string,string);

    string getPlaca();
    string getZonaTra();
    int getOrdenes();

    int ganancias();

    int toString();

};





#endif

