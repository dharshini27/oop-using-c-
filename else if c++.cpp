#include<iostream>
int main()
{
	int a,b,c,d;
	a=6;
	b=9;
	c=2;
	d=5;
	if(a>b)
	{
		std::cout<<"A is greater";
	}
	else if(b>c)
	{
		std::cout<<"B is greater";
	}
	else if(c>d)
	{
		std::cout<<"C is greater";
	}
	else if(d>a)
	{
		std::cout<<"D is greater";
	}
	else
	{
		std::cout<<"invalid input";
	}
	return 0;
}