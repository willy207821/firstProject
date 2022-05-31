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
	const char * fn="test.bin";
	Person buf1;
	
public:
	VectorPerson();

	void writeVector();

	std::vector<Person>getDataVector();
	void save_file();
	void load_file();

	void printVector();
	void findPerson();

	~VectorPerson();
};

#endif
