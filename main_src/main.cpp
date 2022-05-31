#include <cstdio>
#include <vector>
#include <cstring>
#include <cstdlib>
#include "VectorPerson.h"
#include "Person.h"

int main(int argc, const char** argv)
{
	puts("Main program");

	std::vector<Person>p;// Struct Vector 
	VectorPerson vperson;//class 

  vperson.load_file();
 /* vperson.printVector();

	vperson.writeVector(); // write it data and put in struct vector
  

  vperson.save_file();
  vperson.load_file();
 */
  vperson.printVector();



    return 0;
}
