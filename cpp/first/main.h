#include <iostream>

using namespace std;

class integer
{
	private:
		int i;
	public:	
		void getdata()
		{
			cout<<endl<<"Enter any integer = ";
			cin>>i;
		}
		void setdata(int j)
		{
			i=j;
		}
		integer();
		integer( int j );
	        void displaydata();
};

integer::integer()
{
}

integer::integer( int j )
{
	i = j;
}

void integer::displaydata()
{
	cout<<"value of i = "<<i<<endl;
}

