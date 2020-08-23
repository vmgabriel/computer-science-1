#include <stdio.h>
#include <iostream>

#include "Fecha.h"

using namespace std;

#ifndef SOLICITUD
#define SOLICITUD

class Solicitud
{
        private:
                int cod, cod_perro, cod_cliente;
	        Fecha fecha_solicitud;

	public:
                Solicitud();
                ~Solicitud();
	        void crear();
};

void Solicitud::crear()
{}
#endif
