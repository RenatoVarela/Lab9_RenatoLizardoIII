#ifndef PERSONAS_H
#define PERSONAS_H
#include <string>
#include <iostream>


using std::string;


class Personas
{
protected:
    int gananciasP;
    string nombre,identidad,edad;
public:
    Personas();
    Personas(string,string,string,int);
    string getNombre();
    string getIdentidad();
    string getEdad();
    int getGananciasP();

    virtual int ganancias() = 0;

    virtual int toString();
    
};





#endif