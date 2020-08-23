#include <stdio.h>
#include <iostream>
#include <string>

#include "Fecha.h"
#include "Horario.h"
#include "Lista.h"
#include "Direccion.h"

#ifndef PASEADOR
#define PASEADOR

/*
 * Para el manejo de lista de fechas se van a manejar de la siguiente manera
 * 0 es la hora de domingo
 * 1 es la hora de lunes
 * 2 es la hora de martes
 * 3 es la hora de miercoles
 * 4 es la hora de jueves
 * 5 es la hora de viernes
 * 6 es la hora de sabado
 * Dicho de otra manera cada paseador va a tener 6 fechas diferentes
 * */

class Paseador
{
        public:
                string nombre, apellido, tipo_identificacion, sexo, ciudad_nacimiento;
	        string pais_nacimiento, barrio, email;
	        int num_identificacion, telefono_celular, telefono_fijo,edad;
	        Fecha *fechanacimiento;
                Direccion direccion;
	        Lista <Horario> *horario_sem;

        private:
                Paseador();
                ~Paseador();
                bool llenar(string nom,string ape,string tipo,string s,string cn,string pais,
                            Direccion *dire,string bar,string em,int num,int tel,int cel,int ed,Fecha *fn,
                            Lista<Horario> *hora);
                string imprimir();
                bool modificar(string nom,string ape,string tipo,string s,string cn,string pais,
                            Direccion *dire,string bar,string em,int num,int tel,int cel,int ed,Fecha *fn,
                            Lista<Horario> *hora);

                //Getter
                string getNombre(){return nombre;}
                string getApellido(){return apellido;}
                string getTI(){return tipo_identificacion;}
                string getsexo(){return sexo;}
                string getciudad(){return ciudad_nacimiento;}
                string getpais(){return pais_nacimiento;}
                Direccion *getdir(){return direccion;}
                string getbarrio(){return barrio;}
                string getemail(){return email;}
                Fecha *getfecha(){return fechanacimiento;}

};

/**
* Esta funcion puede llenar o modificar los datos del paseador
*/
bool llenar(string nom,string ape,string tipo,string s,string cn,string pais,
            Direccion *dire,string bar,string em,int num,int tel,int cel,int ed,Fecha *fn,
            Lista<Horario> *hora)
{
        bool a=false;
        if ((ed>=18) && (ed<=65))//Control de edad
	{
		p->nombre=nom;
		p->apellido=ape;
		p->tipo_identificacion=tipo;
		p->sexo=s;
		p->ciudad_nacimiento=cn;
		p->pais_nacimiento=pais;
		p->direccion=dire;
		p->barrio=bar;
		p->email=em;
		p->num_identificacion=num;
		p->telefono_celular=cel;
		p->telefono_fijo=tel;
		p->edad=ed;
		p->fechanacimiento=fn;
		p->horario_sem=hora;
		a=true;
        }
	return a;
}

/*
* Imprime los datosen una linea entera, excepto el horario
* */
string imprimir()
{
	string aux;
	aux=p->nombre+" "+p->apellido+" TI:"+p->tipo_identificacion
		+" sexo:"+p->sexo+" nativo:"+p->ciudad_nacimiento+
		" origen:"+p->pais_nacimiento+" dir:"+p->direccion+" mail:"+p->email
		+" CC:"+to_string(p->num_identificacion)+" Tel:"+to_string(p->telefono_celular)
		+" Cel:"+to_string(p->telefono_fijo)+" edad:"+to_string(p->edad)+
		" Nacimiento:"+p->fechanacimiento->imprimir();
        return aux;
}

#endif
