#include<iostream>
int main()
{
	int a,b,c,d;
	std::cout<<"1.addition,2.subraction  ";
	std::cout<<"enter the choice : ";
	std::cin>>c;
	std::cout<<"enter the value of a : ";
	std::cin>>a;
	std::cout<<"enter the value of b : ";
	std::cin>>b;
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