#include "Oficina.h"

using namespace std;

Oficina::Oficina():Personas()
{
}

Oficina::Oficina(string nombre1, string identidad1, string edad1, int ganancias1, int OrdenAtendidas1, string horasT1, string local1) : Personas(nombre1, identidad1, edad1, ganancias1)
{
    OrdenAtendidas = OrdenAtendidas1;
    horasT = horasT1;
    local = local1;
}

string Oficina::getHorasT()
{
    return horasT;
}


string Oficina::getLocal()
{
    return local;
}


int Oficina::getOrdenAtendidas()
{
    return OrdenAtendidas;
}


int Oficina::ganancias(){

    int ganancia = 0;

    ganancia = 30*(2*OrdenAtendidas);

    return ganancia;
    
}


int Oficina::toString(){
    Personas::toString();
    cout<<"Ordenes Atendidas:"<<OrdenAtendidas<<" Horas trabajadas:"<<horasT << " Local de trabajo:"<<local  <<endl;
    return 0;

}


