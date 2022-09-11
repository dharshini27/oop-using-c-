#include<iostream>
using namespace std;


//base class 1
class dharshini
{
	public:
		void collage()
		{
			cout<<"simats"<<"end1";
		}
};

//base class 2
class dilip
{
	public:
		void city()
		{
			cout<<" neyveli "<<"end1";
		}
};

//derived class 1;
class raja:public dharshini
{
	public:
		void occupation1()
		{
			cout<<"employee"<<"end1";
		}
};


//derived class 2;
class elavarasi:public dharshini,public dilip
{
	public:
		void occupation2()
		{
			cout<<"house wife"<<"end1";
		}
};

int main()
{
	int occupation1,occupation2,collage,city;
	raja obj1;
	elavarasi obj2;
	obj1.occupation1();
	obj2.occupation2();
	obj2.city();
	obj2.collage();
	
	return 0;
}