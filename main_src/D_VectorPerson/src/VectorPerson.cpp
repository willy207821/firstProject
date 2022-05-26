#include "VectorPerson.h"

VectorPerson::VectorPerson() {}


//write in vector
void VectorPerson::writeVector()
{

    //store in struct buf1.name
    char temp[30];//hold string character
    static int len=0;//lenght of the string initialize
    memset(temp,0,30);//initialize to  0 string a temp holder
    fputs("Name: ",stdout);// prompt Name in a console
    fflush(stdout);
    fgets(temp,30,stdin); //get string and put in temp char
    fflush(stdin);
    len=strlen(temp)-1; // get the lenght of the string
    temp[len]='\0'; // make  sure the string has 0 terminator
    strncpy(buf1.name,temp,len+1);// copy temp to a struct 

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

//get vector data

	std::vector<Person>VectorPerson::getDataVector()
	{
		return vector_person;
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
<<<<<<< HEAD:main_src/D_VectorPerson/src/VectorPerson.cpp
void VectorPerson::findPerson()
{
	char fname[30];
	int fnlen=0;
	fputs("find Person Type Here: ",stdout);
    fflush(stdout);
    fgets(fname,30,stdin);
    fflush(stdin);
    fnlen=strlen(fname)-1;
    fname[fnlen]='\0';
=======
void VectorPerson::show()
{

        printf("%d : show-->Person: %s is %d year old & %.2f tall\n",1, vector_person[1].name,vector_person[1].age,vector_person[1].height); 
>>>>>>> 9d034beaaf29665d067e30b8f9b4794d7f3bb8d9:main_src/VectorPerson/src/VectorPerson.cpp

	for (int i = 0; i < vector_person.size(); i++)
{		
		int fresult =strcmp(fname,vector_person[i].name);
		if(fresult == 0){
        printf("%d : Person found: %s is %d year old & %.2f tall\n",i, vector_person[i].name,vector_person[i].age,vector_person[i].height); 

		}
	}
}

VectorPerson::~VectorPerson() {}
