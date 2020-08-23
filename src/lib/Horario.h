#include <stdio.h>
#include <iostream>
#include <string>

#include "Fecha.h"

#ifndef HORARIO
#define HORARIO

using namespace std;

class Horario
{
        private:
                Fecha hora_inicio, hora_fin;
	        string dia_semana;

	public:
                Horario();
                ~Horario();
                void crear();
};

void Horario::crear(Fecha hi, Fecha hf, string ds)
{
        hora_inicio=hi;
        hora_fin=hf;
        dia_semana=ds;
}
#endif
