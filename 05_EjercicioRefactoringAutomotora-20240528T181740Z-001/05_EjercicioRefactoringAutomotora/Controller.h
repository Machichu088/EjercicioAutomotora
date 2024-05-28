/*
 * Controller.h
 *
 *  Created on: 28 may. 2024
 *      Author: tecnologo
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include <list>
#include "Cliente.h"
#include "Vehiculo.h"
#include "IController.h"
using namespace std;


class Controller: public IController{
private:
	list<Vehiculo*> vehiculos;
	list<Cliente*> clientes;

public:
	Controller();
	virtual ~Controller();
	void registrarVenta(int nroVehi, int nroCli);

};

#endif /* CONTROLLER_H_ */
