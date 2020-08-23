#include <stdio.h>
#include <iostream>
#include <string>

#include "Lista.h"
#include "Localidad.h"

using namespace std;

#ifndef CIUDAD
#define CIUDAD

class Ciudad
{
        private:
                string nombre;
                int mapa[200][200];
                Lista<Localidad> seccion;

        public:
                Ciudad(string nom);
                ~Ciudad();
                void insertarLoc(Localidad *loc);
                bool eliminarLoc(Localidad *loc);
                void modificarLoc(Localidad *loc);

                //Getter
                string getNombre(){return nombre;}
}

//El Valor identidad del mapa que quiere decir que la parte no divide
// una localidad es 0

Ciudad::Ciudad(string nom)
{
        nombre=nom;
        for (int i=0;i<200;i++)
        {
                for (int j=0;j<200;j++)
                {
                        mapa[0][0]=0;
                }
        }
        seccion=NULL;
}

void insertarLoc(Localidad *loc)
{}

bool eliminarLoc(Localidad *loc)
{
        return false;
}

void modificarLoc(Localidad *loc)
{}
#endif
