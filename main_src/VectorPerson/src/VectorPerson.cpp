#include "VectorPerson.h"

VectorPerson::VectorPerson() {}

//write in vector
void VectorPerson::writeVector() 
{
	
    //store in vector buf1.name
    char temp[30];
    static int len=0;
    memset(temp,0,30);
    fputs("Name: ",stdout);
    fflush(stdout);
    fgets(temp,30,stdin);
    fflush(stdin);
    len=strlen(temp)-1;
    temp[len]='\0';
    strncpy(buf1.name,temp,len+1);

    //store in vector buf1.age
    memset(temp,0,30);
    fputs("age: ",stdout);
    fflush(stdout);
    fgets(temp,30,stdin);
    fflush(stdin);
    len=strlen(temp)-1;
    temp[len]='\0';
    buf1.age = std::atoi(temp);
    

//store in vector buf1.height
    memset(temp,0,30);
    fputs("height: ",stdout);
    fflush(stdout);
    fgets(temp,30,stdin);
    fflush(stdin);
    len=strlen(temp)-1;
    temp[len]='\0';
    buf1.height = strtod(temp,NULL);

    vector_person.push_back(buf1);
}
//print vector in console
void VectorPerson::printVector() 
{
	for(Person v : vector_person){
		printf("Person: %s is %d year old & %.2f tall\n",v.name,v.age,v.height);
	}
}


VectorPerson::~VectorPerson() {}