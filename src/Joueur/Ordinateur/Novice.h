/*
 * Novice.h
 *
 *  Created on: 27 janv. 2015
 *      Author: Amin
 */

#ifndef SRC_NOVICE_H_
#define SRC_NOVICE_H_

#include "Ordinateur.h"

class Novice : Ordinateur{
public:
	Novice(int num, string name, Animal *mesAnimaux):Ordinateur(num,name,mesAnimaux){}
	virtual ~Novice(){};
};

#endif /* SRC_NOVICE_H_ */
