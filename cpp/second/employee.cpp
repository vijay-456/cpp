#include "employee.h"

employee::employee()
{
	this->name = "";
	age = 0;
}

employee::employee(string n, int a)
{
	this->name = n;
	age = a;
}

void employee::getdata()
{
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter age : ";
	cin>>age;
}

void employee::showdata()
{
	cout<<"Name = "<<name<<endl;
	cout<<"Age  = "<<age<<endl;
}


