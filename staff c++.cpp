#include<iostream>
using namespace std;
int main()
{
	int n,n1,user,nstaff;
	cout<<"enter the total user :";
	cin>>n;
	if(n>1) 
	{
		cout<<"enter the no of staff user ";
		cin>>n1;
		if(n==n1)
		{
			cout<<"the two value are same plz enter different num .";
		}
		else if(n1>n)
		{
			cout<<"invalid input the staff user is greater than total user .";
		}
		else
		{
			nstaff=n1/3;
			user=n-n1-nstaff;
			cout<<"the studentuser is:"<<user;
		}
	}
	else
	{
		cout<<"invalid input";
	}
	return 0;
}