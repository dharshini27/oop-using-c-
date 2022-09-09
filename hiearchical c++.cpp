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

int main()
{
	raja obj1;
	elavarasi obj2;
	dilip obj3;
	obj1.city();
	obj2.work();
	obj1.collage();
	obj2.collage();
	obj3.collage();
	obj3.interest();
	return 0;
	
}