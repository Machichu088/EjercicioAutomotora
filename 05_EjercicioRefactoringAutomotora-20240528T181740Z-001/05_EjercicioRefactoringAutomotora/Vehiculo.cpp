/*
 * Vehiculo.cpp
 *
 *  Created on: 28 may 2024
 *      Author: gabriel
 */

#include "Vehiculo.h"
#include "Cliente.h"
#include <iostream>
using namespace std;

Vehiculo::Vehiculo() {
	// TODO Auto-generated constructor stub

}
Vehiculo::Vehiculo(int nro, string mat, Cliente* duenioActual) {
	this->nro = nro;
	this->matricula = mat;
	this->duenioActual = duenioActual;
}

Vehiculo::~Vehiculo() {
	// TODO Auto-generated destructor stub
}


void Vehiculo::registrarDuenio(Cliente* cEncontrado){

	if (this->duenioActual != nullptr && this->duenioActual == cEncontrado) {
		cout << "El nuevo duenio no puede ser el duenio actual" << endl;
	} else {

		this->dueniosAnteriores.push_back(duenioActual);
		this->duenioActual = cEncontrado;

	}

}

