#ifndef VECTORPERSON_H
#define VECTORPERSON_H
#include "Person.h"
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <Person.h>



class VectorPerson {
protected:
	std::vector<Person>vector_person;
	Person buf1;
public:
	VectorPerson();

	void writeVector();

	std::vector<Person>getDataVector();

	void printVector();
	void findPerson();

	~VectorPerson();
};

#endif
