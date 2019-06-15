

#ifndef NEGOCIOSASOCIADOS_H
#define NEGOCIOSASOCIADOS_H
#include "Productos.h"
#include <string>
#include <iostream>
#include <vector>



using std::string;
using std::vector;


class NegociosAsociados
{
public:
string nombre,ubicacion,numLocales;


vector<Productos*>productos;


    
    
public:
    NegociosAsociados(/* args */);




    NegociosAsociados(string,string,string);


    string getNombre();
    string  getUbicacion();
    string getNumLocales();

    vector<Productos*> getProductos();
   // vector<Productos*> setProductos();

  
};







#endif