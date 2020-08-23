#include <stdio.h>
#include <iostream>
#include <string>

#include "Direccion.h"
#include "Paseador.h"
#include "Cliente.h"

#ifndef SUCURSAL
#define SUCURSAL

class Sucursal
{
        private:
                int cod;
                string nombre, nomGerente;
                Direccion *inicio, *fin;
                Lista<Cliente> *inscritos;
                Lista<Paseador> *contratados;

        public:
                Sucursal(string nom, string nomg, Direccion *ini, Direccion *f);
                ~Sucursal();
                void inscribirCliente(Cliente *cli);
                bool modificarCliente(Cliente *cli, int cod);
                bool eliminarCliente(int cod);
                void contratarPaseador(Paseador *p);
                bool modificarPaseador(Paseador *cli, int cod);
                bool despedirPaseador(int cod);

                //Getter
                int getCode(){return cod;}
                string getNombre(){return nombre;}
                string getNomGerente(){return nomGerente;}
                Direccion *getDirIni(){return inicio;}
                Direccion *getDirFin(){return fin;}
                int cantclientes(){return (inscritos->cantelem());}
                int cantpaseadores(){return (contratados->cantelem());}
};

Sucursal::Sucursal(string nom, string nomg, Direccion *ini, Direccion *f)
{}

void Sucursal::inscribirCliente(Cliente *cli)
{}

bool Sucursal::modificarCliente(Cliente *cli, int cod)
{}

bool Sucursal::eliminarCliente(int cod)
{}

void Sucursal::contratarPaseador(Paseador *p)
{}

bool Sucursal::modificarPaseador(Paseador *cli, int cod)
{}

bool Sucursal::despedirPaseador(int cod)
{}

#endif
