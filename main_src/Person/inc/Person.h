#ifndef PERSON_H
#define PERSON_H
#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
class Person {
public:
	int age;
	char name[30];
	double height;
public:
	Person();
	~Person();

};
extern std::vector<Person>vp;
#endif
