#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"to check odd or even number?";
	cout<<"enter the positive integer number :";
	cin>>a;
	if(a%2==0)
	{
		cout<<"the given number :"<<a<<" is even number.";
	}
	else
	{
		cout<<"the given number :"<<a<<" is odd number.";
	}
	return 0;
}