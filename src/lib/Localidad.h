#include <stdio.h>
#include <iostream>
#include <string>

#include "Lista.h"
#include "Perro.h"
#include "Sucursal.h"
#include "Direccion.h"

#ifndef LOCALIDAD
#define LOCALIDAD

class Localidad
{
        public:
                int cod;
                string nombre;
                Direccion *inicial, *fin;
                Lista<Sucursal> *sede;

        private:
                Localidad(string nom, Direccion *i, Direccion *f);
                ~Localidad();
                void insertarSucursal(Sucursal *suc);
                void eliminarSucursal(int cod);
                void modSucursal(Sucursal *suc, int cod);

                //Getter
                int getCod(){return cod;}
                string getNombre(){return nombre;}
                Direccion *getDireccionini(){return inicial;}
                Direccion *getDireccionfin(){return fin;}
};

Localidad::Localidad(string nom, Direccion *i, Direccion *f)
{}

void Localidad::insertarSucursal(Sucursal *suc)
{}

void Localidad::eliminarSucursal(int cod)
{}

void Localidad::modSucursal(Sucursal *suc, int cod)
{}

#endif
