/*
	In this section, we placed class intialisation, class constructors and 
	member functions, and program logic in employee.h, employee.cpp and 
	main.cpp files respectively.

	In the next section, we see multiple classes and .cpp files and we learn
	how to use make_file for those. 


	COMPILATIONS : g++ main.cpp employee.cpp -o main
	EXECUTION    : ./main

*/

#include "employee.h"

int main()
{
	employee e1("srinivas", 24);
	e1.showdata();
	employee e2;
	e2.getdata();
	e2.showdata();
	return 0;
}
