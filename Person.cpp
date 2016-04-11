/*
 * Person.cpp
 *
 *  Created on: Mar 11, 2016
 *      Author: root
 */

#include "Person.h"

Person::Person()
{
	//
}

Person::Person(const string& na):name(na)
{
	// TODO Auto-generated constructor stub

}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

Person& Person::operator=(const Person& lhs)
{
	name = lhs.name;
	return *this;
}

void Person::show()
{
	cout<<" ×°°çµÄ "<<name<<endl;
}

