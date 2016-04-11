/*
 * Finery.h
 *
 *  Created on: Mar 11, 2016
 *      Author: root
 */

#ifndef FINERY_H_
#define FINERY_H_

#include "Person.h"

class Finery: public Person {
public:
	Finery();
	~Finery();
public:
	void Decorate(Person* co);
	void show();
protected:
	Person* component;
};

#endif /* FINERY_H_ */
