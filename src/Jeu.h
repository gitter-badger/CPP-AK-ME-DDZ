/*
 * Jeu.h
 *
 *  Created on: 30 janv. 2015
 *      Author: Amin
 */

#ifndef SRC_JEU_H_
#define SRC_JEU_H_

class Jeu {
public:
	Jeu();
	virtual ~Jeu();

	void init();

	bool isFinished();
	int countNbAnimalLeft();
};

#endif /* SRC_JEU_H_ */
