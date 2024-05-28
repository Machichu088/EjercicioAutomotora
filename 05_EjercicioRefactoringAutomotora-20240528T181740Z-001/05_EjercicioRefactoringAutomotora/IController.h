/*
 * IController.h
 *
 *  Created on: 28 may. 2024
 *      Author: tecnologo
 */

#ifndef ICONTROLLER_H_
#define ICONTROLLER_H_


class IController {
public:
	virtual void registrarVenta(int nroVehi, int nroCli)=0;
};


#endif /* ICONTROLLER_H_ */
