/*
	This section we are having two classes, so we made five files.
	Now, we are using make file for compilation.

	If, we use make file then, there is no need check and compile
	every file. We can just compile the whole application using
	makefile.

	COMPILATION : g++ main.cpp shop.cpp person.cpp -o main
	EXECUTION   : ./main

	For updating makefile, type : make -f makefile

*/


#include "shop.h"
#include "person.h"

int main()
{
	person pobj(456,"vijay srinivas");
	shop sobj(666,"vekateswara store");

	sobj.get_shop_details();
	pobj.get_person_details();
	
	return 0;
}
