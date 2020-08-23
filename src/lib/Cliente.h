#include <stdio.h>
#include <iostream>
#include <string>

#include "Lista.h"
#include "Perro.h"
#include "Solicitud.h"

using namespace std;

#ifndef CLIENTE
#define CLIENTE

class Cliente
{
	private:
                string nombre, apellido, sexo;
                int identificacion, localidad;
                Lista<Perro> *mascota;

	public:
                Cliente(string n, string a, string s, int id, int loc);
                ~Cliente();
                bool modificar(string n, string a, string s, int id, int loc);
                void adoptarPerro(Perro *p);
                void eliminarPerro(int cod);
                void modifcarPerro(Perro *p, int cod);

                //Getter
                string getNombre(){return nombre;}
                string getApellido(){return apellido;}
                string getSexo(){return sexo;}
                int getId(){return identificacion;}
                int getLoc(){return localidad;}
                int cantPerros(){return (mascota->cantelem());}
};

Cliente::Cliente(string n, string a, string s, int id, int loc)
{
        return NULL;
}

bool Cliente::modificar(string n, string a, string s, int id, int loc)
{
        return true;
}

void Cliente::adoptarPerro(Perro *p)
{}

void Cliente::eliminarPerro(int cod)
{}

void Cliente::modifcarPerro(Perro *p, int cod)
{}

#endif
