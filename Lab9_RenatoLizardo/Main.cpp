#include "Personas.h"
#include "Clientes.h"
#include "Oficina.h"
#include "Repartidores.h"
#include "NegociosAsociados.h"
#include "Productos.h"
#include "Ordenes.h"
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <string>

#include <iostream>
#include <typeinfo>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

Personas *AgregarPersonas();
NegociosAsociados *AgregarNegocio();
Ordenes *AgregarOrden();
void TerminarOrden();
void guardar();
vector<NegociosAsociados *> negocios;
vector<Personas *> personas;

vector<Clientes *> clientes;
vector<Repartidores *> repartidores;
vector<Oficina *> oficinistas;



/***-----****/
vector<Ordenes *> ordenes;
vector<Ordenes *> terminadas;

int main()
{

    bool salir = false;
    int opcion = 0;
    int eliminar;

    while (salir == false)
    {
        cout << "INgrese una opcion: " << endl
             << "1) Agregar una Persona: " << endl
             << "2) Listar Personas: " << endl
             << "3) Eliminar Persona: " << endl
             << "4) Agregar un Negocio: " << endl
             << "5) Listar Negocios: " << endl
             << "6) Eliminar Negocios: " << endl
             << "7) Agregar Ordenes: " << endl
             << "8) COnfirmar Orden: " << endl
             << "Cualquier otro numero para salir: " << endl;

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            AgregarPersonas();

            break;

        case 2:

            for (int i = 0; i < personas.size(); i++)
            {

                cout << "CLientes" << endl;

                if (typeid(*personas[i]) == typeid(Clientes))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }

            cout << "Repartidores:" << endl;

            for (int i = 0; i < personas.size(); i++)
            {

                if (typeid(*personas[i]) == typeid(Repartidores))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }

            cout << "Empleados de Oficina:" << endl;

            for (int i = 0; i < personas.size(); i++)
            {

                if (typeid(*personas[i]) == typeid(Oficina))
                {
                    personas[i]->toString();
                    cout << "-----------------------------------------------------" << endl;
                }
            }

            /*
            for (int i = 0; i < personas.size(); i++)
            {
                personas[i]->toString();
                cout << "-----------------------------------------------------" << endl;
            }*/
            break;

        case 3:

            cout << "INgrese la posicion de la persona a la que desea eliminar" << endl;
            cin >> eliminar;

            if (eliminar < personas.size() && eliminar >= 0)
            {
                personas.erase(begin(personas) + eliminar);
            }
            else
            {
                cout << "esa posicion no existe" << endl;
            }
            break;

        case 4:
            AgregarNegocio();
            break;

        case 5:
            for (int i = 0; i < negocios.size(); i++)
            {
                cout << negocios[i]->getNombre() << endl;
                cout << negocios[i]->getUbicacion() << endl;
                cout << negocios[i]->getNumLocales() << endl;

                cout<<"productos:"<<endl;
                for (int i = 0; i < negocios[i]->getProductos().size(); i++)
                {
                    cout << negocios[i]->getProductos()[i]->getNombre() << endl;
                    cout << negocios[i]->getProductos()[i]->getTipo() << endl;
                }

                cout << "-----------------------------------------------------" << endl;
            }

            break;

        case 6:
            cout << "INgrese la posicion de la persona a la que desea eliminar" << endl;
            cin >> eliminar;

            if (eliminar < negocios.size() && eliminar >= 0)
            {
                negocios.erase(begin(negocios) + eliminar);
            }
            break;


            case 7:
                AgregarOrden();

            break;

            case 8:
                TerminarOrden();

            break;

        default:
            guardar();
            salir = true;
            break;
        }
    }

    return 0;
}

Personas*AgregarPersonas()
{



    int gananciasP;
     
    string nombre, identidad, edad;

    ///los valores de cliente

    string direccion, telefono, tarjeta;
    
    int pedidos;

    ///los valores de los empleados de oficina

    string horasT, local;
    int OrdenAtendidas;

    //los valores de los repartidores
    string placa, zonaTra;
    
    int ordenes3;

    int opcion;

    

    Personas *persona;
     cout<<"depue"<<endl;

    cout << "INgrese el nombre de la persona" << endl;
    cin >> nombre;

    cout << "INgrese la identidad de la persona" << endl;
    cin >> identidad;

    cout << "INgrese la edad de la persona" << endl;
    cin >> edad;

    cout << "INgrese las ganancias de la persona" << endl;
    cin >> gananciasP;

    cout << "Ingrese el una de las siguientes opciones" << endl
         << "1)Si es un CLiente" << endl
         << "1)Si es un repartidor" << endl
         << "3)Si es un Empleado de Oficina" << endl;

    cin >> opcion;

    switch (opcion)
    {
    case 1:
        /*  string direccion,telefono,tarjeta = 0;
    int pedidos;

    */
        cout << "INgrese la direccion del CLiente" << endl;
        cin >> direccion;

        cout << "INgrese el numero de telefono del CLiente" << endl;
        cin >> telefono;

        cout << "INgrese el numero de la tarjeta de CLiente" << endl;
        cin >> tarjeta;

        cout << "INgrese los pedidos del Cliente" << endl;
        cin >> pedidos;


        cout<<"xxsxsxs0"<<endl;

        persona = new Clientes(nombre, identidad, edad, gananciasP, pedidos, direccion, telefono, tarjeta);
        cout<<"asdsadadd"<<endl;
        personas.push_back(persona);
        clientes.push_back(dynamic_cast<Clientes *>(persona));

        break;

    case 2:

        /*
          string placa,zonaTra;
    int ordenes;

          */

        cout << "INgrese el numero de la placa" << endl;
        cin >> placa;

        cout << "INgrese la zona de trabajo favorita" << endl;
        cin >> zonaTra;

        cout << "INgrese el numero de Ordenes " << endl;
        cin >> ordenes3;

        persona = new Repartidores(nombre, identidad, edad, gananciasP, ordenes3, placa, zonaTra);
        personas.push_back(persona);
        repartidores.push_back(dynamic_cast<Repartidores *>(persona));

        break;

    case 3:
        /*
     string horasT,local;
    int OrdenAtendidas;

    */

        cout << "INgrese el numero de horas tabajadas" << endl;
        cin >> horasT;

        cout << "INgrese el local donde trabaja" << endl;
        cin >> local;

        cout << "INgrese el numero de Ordenes Arendidasd " << endl;
        cin >> OrdenAtendidas;

        persona = new Oficina(nombre, identidad, edad, gananciasP, OrdenAtendidas, horasT, local);
        personas.push_back(persona);
        oficinistas.push_back(dynamic_cast<Oficina *>(persona));

        break;

    default:
        break;
    }

    return persona;
}

NegociosAsociados *AgregarNegocio()
{
    /* string nombre,ubicacion,numLocales;


vector<Productos*>productos;*/

    //string nombre, tipo;


    string nombre, ubicacion, numLocales;
    string nombreP, tipo;
    int opcion;
    string salir;

    NegociosAsociados *negocio;
    Productos *producto;

    cout << "INgrese el nombre del Negocio" << endl;
    cin >> nombre;

    cout << "INgrese la Ubicacion del negocio" << endl;
    cin >> ubicacion;

    cout << "INgrese el nuemro de locales" << endl;
    cin >> numLocales;

    negocio = new NegociosAsociados(nombre, ubicacion, numLocales);

    cout<<"here"<<endl;

    do
    {
        cout << "INgrese el nombre del Producto" << endl;
        cin >> nombreP;

        cout << "INgrese el tipo de Producto" << endl;
        cin >> tipo;

        producto = new Productos(nombreP, tipo);

        negocio->getProductos().push_back(producto);

        cout << "------------------------------" << endl;

        cout << "INgrese [S] Para salir o CUalquier numero para seguir" << endl;
        cin >> salir;

    } while (salir == "s" || salir == "S");

    negocios.push_back(negocio);

    return negocio;
}

Ordenes *AgregarOrden()
{
    int num_Cliente, num_Negocio, num_Producto, num_Repartidor;
    string tipo;

    Ordenes *orden;

    /*
 Clientes * cliente;
    NegociosAsociados* negocio;
    Repartidores* repartidor;
    Productos* producto;
    string tipo;
    string estado;

*/

string proceso = "Proceso";

    for (int i = 0; i < clientes.size(); i++)
    {

        cout << i << ")";
        clientes[i]->toString();
    }

    cout << "INgrese el numero del CLiente que desea ingresar" << endl;
    cin >> num_Cliente;

    cout << "INgrese El negocio del cual sera comprado" << endl;
    cin >> num_Negocio;

    cout << "INgrese el numero del producto" << endl;
    cin >> num_Producto;



cout<<"aqui te sale el "<<endl;
    for (int i = 0; i < repartidores.size(); i++)
    {

        cout << i << ")";
        repartidores[i]->toString();
    }


    cout << "INgrese el numero del Repartidor" << endl;
    cin >> num_Repartidor;
    

    orden = new Ordenes(clientes[num_Cliente],negocios[num_Negocio],repartidores[num_Repartidor],/*negocios[num_Negocio]->getProductos()[num_Producto]*/ new Productos(),"Fruta","Proceso");
    ordenes.push_back(orden);

    

    for (int i = 0; i < ordenes.size(); i++)
    {
             cout<< ordenes[i]->getEstado()<<endl;
    }
    
    return orden;
}




void TerminarOrden(){


    int numero;
    int opcion;

    for (int i = 0; i < ordenes.size(); i++)
    {
        cout<<i<<")";
        cout<<ordenes[i]->getClientes()->getNombre()<<endl;
    }
    

   cout<<"INgrese el numero de la Orden"<<endl;
   cin >> numero;


   cout<<"INgrese 1 para Confirmar o INgrese 2 para Cancelar"<<endl;
   cin>>opcion;

   switch (opcion)
   {
   case 1:
       ordenes[numero]->setEstado("Confirmado");
       break;


    case 2:
    ordenes[numero]->setEstado("Cancelado");

    break;
   
   default:
   ordenes[numero]->setEstado("Confirmado");
       break;
   }







   terminadas.push_back(ordenes[numero]);


   ordenes.erase(ordenes.begin() + numero);

   

   
    

}



void guardar()
{
 string numero;


 for (int j = 0; j < terminadas.size(); j++)
 {

     
     fstream archivo("registro"+to_string(j)+".txt");

    if (!archivo.is_open())
    {
        archivo.open("registro.txt", ios::app);
    }

    for (int i = 0; i < personas.size(); i++)
    {

        archivo << "Nombre: " << terminadas[i]->getClientes()->getNombre() << endl;
        archivo<<"****************************"<<endl;
        archivo << "Edad: " << terminadas[i]->getClientes()->getEdad() << endl;
        archivo << "Direccion: " << terminadas[i]->getClientes()->getDireccion() << endl;
        archivo << "Ubicacion " << terminadas[i]->getNegocios()->getUbicacion() << endl;
        archivo << "Producto: " <<  terminadas[i]->getProductos()->getNombre() << endl;
         archivo << "Repartidor: " <<  terminadas[i]->getRepatidores()->getNombre() << endl;
         archivo<<"*************************"<<endl;

        
       //(nombre, edad y ubicación), negocio de donde se compró y el producto. Las facturas no se imprimen en pantalla, se escriben en archivos

        archivo << "---------------------------------------------" << endl;
    }

    archivo.close();
 }
 

    
}
