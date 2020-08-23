#include <cstdlib>
#include <iostream>
#include <string>

#include "cli/interfaz.cpp"
#include "lib/Fecha.h"
#include "lib/Paseador.h"

using namespace std;

int main ()
{
	Interfaz *interfaz=new Interfaz();
	interfaz->bienvenida();

	string a,b,c,d,e,f,g,h,i;
	int x,y,z,w;
	Fecha *fe=new Fecha;
	fe->poner(12,12,2016,12,53);

	cout<<"ingrese nombre:";
	cin>>a;
	cout<<"ingrese apellido:";
	cin>>b;
	cout<<"ingrese tipoI:";
	cin>>c;
	cout<<"ingrese sexo:";
	cin>>d;
	cout<<"ingrese ciudad_na:";
	cin>>e;
	cout<<"ingrese pais_na:";
	cin>>f;
	cout<<"ingrese direccion:";
	cin>>g;
	cout<<"ingrese barrio:";
	cin>>h;
	cout<<"ingrese email:";
	cin>>i;
	cout<<"ingrese identifi:";
	cin>>x;
	cout<<"ingrese celular:";
	cin>>y;
	cout<<"ingrese telefono:";
	cin>>z;
	cout<<"ingrese edad:";
	cin>>w;

	Paseador *trab=new Paseador();
	if (trab->llenar(a,b,c,d,e,f,g,h,i,x,y,z,w,fe,NULL))
	{
	        cout<<"Correcto"<<endl;
	}
	else
	{
	        cout<<"Incorrecto"<<endl;
	}

	string res=trab->imprimir();
	cout<<res<<endl;
	return 0;
}
