/*
 * Person.h
 *
 *  Created on: Mar 11, 2016
 *      Author: root
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <iostream>

using namespace std;

class Person {
public:
	Person();
	Person(const string& na);
	Person& operator=(const Person&);
	~Person();
public:
	virtual void show();
private:
	string name;
};

#endif /* PERSON_H_ */
