#include<iostream>
using namespace std;
int main()
{
	int a,reverse=0,rem;
	cout<<"enter the number you want to reverse :";
	cin>>a;
	
	
	while(a>0)
	{
		rem=a%10;
		reverse=reverse*10+rem;
		a/=10;
	}
	cout<<"reverse number ="<<reverse<<"end1";
	return 0;
}