#ifndef OFICINA_H
#define OFICINA_H
#include <string>
#include <iostream>
#include "Personas.h"

using std::string;

class Oficina: public Personas
{
private:
    string horasT,local;
    int OrdenAtendidas;
public:
    Oficina();
    Oficina(string,string,string,int,int,string,string);

    string getHorasT();
    string getLocal();
    int getOrdenAtendidas();

    int toString();

    int ganancias();

};





#endif
