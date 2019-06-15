#include "Personas.h"
using namespace std;

Personas::Personas(){

}

Personas::Personas(string nombre1, string identidad1, string edad1, int ganancias1)
{
    nombre = nombre1;
    identidad = identidad1;
    edad = edad1;
    gananciasP = ganancias1;
}

string Personas::getNombre()
{
    return nombre;
}



string Personas::getIdentidad()
{
    return identidad;
}



string Personas::getEdad()
{
    return edad;
}


int Personas::getGananciasP(){
    return gananciasP;
}



int Personas::ganancias()
{
    
}


int Personas::toString(){
    cout<<"Nombre:"<<nombre<<" Identidad:"<<identidad << " Edad:"<<edad <<"Ganacias"<<gananciasP <<endl;
    return 0;
}

