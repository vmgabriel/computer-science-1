#include <stdio.h>
#include <iostream>
#include <string>

#include "Fecha.h"
#include "Lista.h"

#ifndef PERRO
#define PERRO

class Perro
{
        private:
                string nombre, raza, tamano, tipo_concetrado;
                Fecha fecha_nac;

	public:
                Perro();
                ~Perro();
                void crear();
};

void Perro::crear()
{
}

#endif
