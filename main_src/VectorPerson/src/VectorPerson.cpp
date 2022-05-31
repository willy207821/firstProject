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
    vp.push_back(buf1);
}

//get vector data

	std::vector<Person>VectorPerson::getDataVector()
	{
		return vp;
	}

// save data 
    void VectorPerson::save_file() 
    {
        FILE * fw=fopen(fn,"wb");
        struct Person wfile;
        for(int i=0;i<vp.size();i++)
        {
        strncpy(wfile.name,vp[i].name,strlen(vp[i].name)+1);
        wfile.age = vp[i].age;
        wfile.height = vp[i].height;
        fwrite(&wfile,sizeof(struct Person),1,fw);
        }
        fclose(fw);
        vp.clear();
    }

void VectorPerson::load_file() 
{
    vp.clear();
    FILE * fr;
    fr=fopen(fn,"rb");
    if(fr != NULL){
    struct Person rfile;
    size_t rc;
        while((rc=fread(&rfile,sizeof(Person),1,fr))){

        //printf("Person: %s is %d year old & %.2f tall\n",rfile.name,rfile.age,rfile.height);
        vp.push_back(rfile);

        }
    }
    fclose(fr);
}

//print data from vector to console
void VectorPerson::printVector()
{
	for (int i = 0; i < vp.size(); i++)
    {
        printf("%d Person: %s is %d year old & %.2f tall\n",i,vp[i].name,vp[i].age,vp[i].height);
    }


}
// get specific data
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
	for (int i = 0; i < vp.size(); i++){
	int fresult =strcmp(fname,vp[i].name);
		if(fresult == 0){
    	printf("%d : Person found: %s is %d year old & %.2f tall\n",i, vp[i].name,vp[i].age,vp[i].height); 
		}

	}

}

VectorPerson::~VectorPerson() {}
