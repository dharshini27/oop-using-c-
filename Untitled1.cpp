#include<iostream>
using namespace std;
class student
{
	public:
		void student()
		{
			cout<<"student";
		}
};
class college:public student
{
	public:
		void college()
		{
			cout<<"college";
		}
};
class home:public student
{
	public:
		void home()
		{
			cout<<"home";
		}
};
class tution:public student
{
	public:
		void tution()
		{
			cout<<"tution";
		}
};
class oops:public college
{
	public:
		void oops()
		{
			cout<<"oops";
		}
};
class work:public home
{
	public:
		void work()
		{
			cout<<"work";
		}
};
class html:public tution
{
	public:
		void g()
		{
			cout<<"html";
		}
};
class job:public oops,public work,public html, public student
{
	public:
		void job()
		{
			cout<<"job";
		}
};
int main(){
	job o1;
	/*o1.student();
    o1.college();
	o1.home();		
	o1.tution();
	o1.oops();	
	o1.work();
	o1.html();	
	o1.job();*/
	return 0;		
}



