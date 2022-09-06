#include<iostream>
int main()
{
	int a,b;
	a=5;
	b=9;
	if(a>b)
	{
		std::cout<<"a is greater";
	}
	else if(b>a)
	{
		std::cout<<"b is greater";
	}
	else
	{
		std::cout<<"invalid input";
	}
	return 0;	
}