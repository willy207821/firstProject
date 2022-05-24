#ifndef VECTORPERSON_H
#define VECTORPERSON_H
#include "Person.h"
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>

class VectorPerson:public Person {
protected:
	std::vector<Person>vector_person;
	Person buf1;
public:
	VectorPerson();
	void writeVector();
	void printVector();

	void show();

	~VectorPerson();
	
};

#endif