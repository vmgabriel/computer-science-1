#include <stdio.h>
#include <iostream>
#include <string>

#include "Fecha.h"

#ifndef PASEO
#define PASEO

using namespace std;

class Paseo
{
	private:
                int id, cod_paseador;
                Fecha *fecha_inicio, *fecha_fin;
	        string tipo_act, observacion;

	public:
                Paseo();
                void crear(int codp, Fecha *fi, Fecha *ff, string tipo, string obs);
                string imprimir();
};

void Paseo::crear(int codp, Fecha *fi, Fecha *ff, string tipo, string obs)
{
        id=0;
        cod_paseador=codp;
	fecha_inicio=fi;
	fecha_fin=ff;
	tipo_act=tipo;
	observacion=obs;
}

string Paseo::imprimir()
{
        string ret;
	ret="[ "+to_string(pas->id)+" Cod Paseador:"+to_string(pas->cod_paseador)
                +" Fecha Inicio:"+pas->fecha_inicio->imprimir()+" Fecha Fin:"+
                pas->fecha_fin->imprimir()+" Act:"+pas->tipo_act+" Observacion: "+
		pas->observacion+" ]";
	return ret;
}
#endif
