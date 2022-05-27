#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
#include "VectorPerson.h"
#include "Person.h"

int main(int argc, const char** argv)
{
	puts("Main program");

	std::vector<Person>p;
	VectorPerson vperson;



	vperson.writeVector();
	vperson.writeVector();
	vperson.writeVector();

	p=vperson.getDataVector();

for(int i=0;i<p.size();i++)
{
	printf("Name: %s | age: %d | height: %.2f\n",p[i].name,p[i].age,p[i].height);
}


	//vperson.findPerson();
	//vperson.printVector();


    return 0;
}
