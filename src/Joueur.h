/*
 * Joueur.h
 *
 *  Created on: 27 janv. 2015
 *      Author: Amin
 */

#ifndef SRC_JOUEUR_H_
#define SRC_JOUEUR_H_

#include <iostream>

#include "Personne.h"


class Animal;


class Joueur:Personne {
private:
	Animal *mesAnimaux;

public:

	int toto;
	Joueur(int num, string name, Animal *mesAnimaux):Personne(num,name),mesAnimaux(mesAnimaux){}
	virtual ~Joueur();

};

#endif /* SRC_JOUEUR_H_ */
