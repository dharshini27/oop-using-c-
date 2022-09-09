#include<iostream>
using namespace std;

//base1
class dharshini
{
	public:
		void collage()
		{
			cout<<"Saveetha"<<"end1";
		}
};


//derived1
class raja:public dharshini
{
	public:
		void city()
		{
			cout<<"chennai"<<"end1";
		}
};



//derived2
class elavarasi:public dharshini
{
	public:
		void work()
		{
			cout<<"house wife"<<"end1";
		}
};


//derived3
class dilip:public dharshini
{
	public:
	void interest()
	{
		cout<<"bike riding"<<"end1";
	}
	
};
//main



int main()
{
	dilip obj;
	obj. city();
	obj. interest();
	obj. work();
	
	
	
	
	return 0;
}