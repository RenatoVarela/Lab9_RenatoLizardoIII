#include "NegociosAsociados.h"


NegociosAsociados::NegociosAsociados(){

}

NegociosAsociados::NegociosAsociados(string nombre1,string ubicacion1, string numlocales1){
    nombre = nombre1;
    ubicacion = ubicacion1;
    numLocales = numlocales1;
  

}

string NegociosAsociados::getNombre(){
    return nombre;

}
    string  NegociosAsociados::getUbicacion(){
        return ubicacion;

    }
    string NegociosAsociados::getNumLocales(){
        return numLocales;

    }


    vector<Productos*> NegociosAsociados::getProductos(){
        return productos;
    }