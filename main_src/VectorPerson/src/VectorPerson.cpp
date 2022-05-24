#include "VectorPerson.h"

VectorPerson::VectorPerson() {}

//write in vector
void VectorPerson::writeVector() 
{
	
    //store in struct buf1.name
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

    //store in struct buf1.age
    memset(temp,0,30);
    fputs("age: ",stdout);
    fflush(stdout);
    fgets(temp,30,stdin);
    fflush(stdin);
    len=strlen(temp)-1;
    temp[len]='\0';
    buf1.age = std::atoi(temp);
    

    //store in struct buf1.height
    memset(temp,0,30);
    fputs("height: ",stdout);
    fflush(stdout);
    fgets(temp,30,stdin);
    fflush(stdin);
    len=strlen(temp)-1;
    temp[len]='\0';
    buf1.height = strtod(temp,NULL);

    //store all in vector
    vector_person.push_back(buf1);
}
//print data from vector to console
void VectorPerson::printVector() 
{
	for (int i = 0; i < vector_person.size(); i++)
    {
        printf("%d Person: %s is %d year old & %.2f tall\n",i,vector_person[i].name,vector_person[i].age,vector_person[i].height);
    }
		
	
}
// get specific data 
void VectorPerson::show() 
{
   
        printf("%d : show-->Person: %s is %d year old & %.2f tall\n",1, vector_person[1].name,vector_person[1].age,vector_person[1].height); 

}

VectorPerson::~VectorPerson() {}