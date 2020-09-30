/* 

   In this section, we created two files, main.h file and main.cpp. 
   For the implementation of OOPS in cpp, we need to declare class,
   initialize the class member functions, and finally we implemented 
   the logic in main file.

   So in this section, we combined class declaration and class member
   functions initialized in the same file(main.h) and implemented the 
   logic in main.cpp file.

   In the next section, we are going to implement in three files

 
   FOR COMILATION: g++ main.cpp -o main
   FOR RUN       : ./main 

*/

#include "main.h"


int main()
{
	integer i1(100), i2, i3;
	
	i1.displaydata();
	i2.setdata(200);
	i2.displaydata();
	i3.getdata();
	i3.displaydata();
}

