#include<iostream>
int main()
{
	int a,b,c,d;
	a=4;b=2;
	std::cout<<"1.add,2.sub";
	std::cout<<"enter your choice";
	std::cin>>c;
	switch(c)
	{
		case 1:
			d=a+b;
			std::cout<<d;
			break;
		
		case 2:
			d=a-b;
			std::cout<<d;
			break;
			
		default:
			std::cout<<"invalid input";
			break;
    }
    return 0;
}