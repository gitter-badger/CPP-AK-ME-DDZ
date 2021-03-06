/*
 * Case.h
 *
 *  Created on: 26 janv. 2015
 *      Author: firminrabefiringa
 */

#ifndef CASE_H_
#define CASE_H_

#include <iostream>
#include <string>

using namespace std;

class Case {
public:
	int secteur;
	bool estOccupe;

	/**
	 * Constructeur par defaut
	 */

	Case():secteur(-1),estOccupe(false){};

	Case(int secteur,bool estOccupe):secteur(secteur),estOccupe(estOccupe){}

	virtual ~Case(){/*cout<<"Destruction de Case"<<endl;*/}

	void affiche();

	Case& operator = (const Case&& other) // copy assignment
	{
	    return *this;
	}
};

#endif /* CASE_H_ */
