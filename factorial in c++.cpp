#include<iostream>
using namespace std;
int main()
{
	int mul=1,a,i;
	cout<<"enter the factorial number:";
	cin>>a;
	
	
	
	if(a==1 || a==0)
	{
		cout<<"the factorial of "<<a<<" is = 1";
	}
	else if(a>1)
	{
		for(i=i;i<=a;i++)
		mul*=i;
		cout<<"the factorial of "<<a<<" is = "<<mul<<"end1";
	    }
	
	}
	else
	{
		cout<<"invalid input";
	}
	return 0;
}