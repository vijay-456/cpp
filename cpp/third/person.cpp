#include "person.h"

person::person()
{
	this->person_id = 0;
	this->person_name = "";
}

person::person(int id, string name)
{
	this->person_id = id;
	this->person_name = name;
}

void person::get_person_details()
{
	cout<<"PERSON_ID   :"<<person_id<<endl;
	cout<<"PERSON_NAME :"<<person_name<<endl;
}
