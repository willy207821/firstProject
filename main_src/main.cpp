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

	vperson.writeVector(); // write it data and put in struct vector
	vperson.writeVector(); // write it data and put in struct vector

	p=vperson.getDataVector();//get data from vector struct copy to p vector

//save data in file
// writting data to a file

const char * fn="test.bin";
FILE * fw=fopen(fn,"wb");
struct Person wfile;
for(int i=0;i<p.size();i++)
{
	strncpy(wfile.name,p[i].name,strlen(p[i].name)+1);
	wfile.age = p[i].age;
	wfile.height = p[i].height;
	fwrite(&wfile,sizeof(struct Person),1,fw);
}
fclose(fw);

// reading data to file
FILE * fr=fopen(fn,"rb");
struct Person rfile;
size_t rc;
while((rc=fread(&rfile,sizeof(Person),1,fr))){

	printf("Person: %s is %d year old & %.2f tall\n",rfile.name,rfile.age,rfile.height);

}
fclose(fr);
	//vperson.findPerson();
	//vperson.printVector();


    return 0;
}
