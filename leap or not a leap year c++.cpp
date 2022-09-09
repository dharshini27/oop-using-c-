#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"to check normal or leap year?"<<"end1";
	cout<<"enter the positive value year :";
	cin>>a;
	if(a%4==0)
	{
		cout<<"the given year :"<<a<<" is leap year.";
	}
	else
	{
		cout<<"the given year :"<<a<<" is not a leap year.";
	}
	return 0;
}