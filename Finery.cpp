/*
 * Finery.cpp
 *
 *  Created on: Mar 11, 2016
 *      Author: root
 */

#include "Finery.h"

Finery::Finery() {
	// TODO Auto-generated constructor stub

}

Finery::~Finery() {
	// TODO Auto-generated destructor stub
}

void Finery::Decorate(Person* co)
{
	component = co;
}

void Finery::show()
{
	component->show();
}

