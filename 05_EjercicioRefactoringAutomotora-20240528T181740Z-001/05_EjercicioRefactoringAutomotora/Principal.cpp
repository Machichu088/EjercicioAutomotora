
#include <iostream>
#include <list>
#include <algorithm>
#include "IController.h"
#include "Controller.h"
using namespace std;

/* Ejercicio:
 *
 * Parte A:
 * Tomando como referencias los principios que guían el buen diseño orientado
 * a objetos y con la ayuda del diagrama de comunicación realizado en clases
 * refactorice este codigo para mejorar la calidad del mismo.
 *
 * Argumente cada decisión de diseño tomada.
 *
 *
 * */
int main() {


	int nroCli = 0;
	int nroVehi = 0;
	cout << "Ingrese nro cliente:" << endl;
	cin >> nroCli;
	cout << "Ingrese nro vehiculo:" << endl;
	cin >> nroVehi;

	IController *c1 = new Controller();
	c1->registrarVenta(nroVehi, nroCli);




}


