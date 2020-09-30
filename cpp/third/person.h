#include <iostream>

using namespace std;

class person
{
	int person_id;
	string person_name;

	public:
		person();
		person(int a, string n); 
		void get_person_details();
};
