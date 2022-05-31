#include "Person.h"
std::vector<Person>vp;
Person::Person():age(0),height(0.00) 
{
   memset(name,0,30);
}

Person::~Person() 
{
    
}