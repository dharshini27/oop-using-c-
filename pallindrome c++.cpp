#include<iostream>
using namespace std;
int main()
{
	int n,rem,reverse=0,temp;
	cout<<"enter the number:";
	cin>>n;
	
	
	temp=n;
	while(n>0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	cout<<"the reverse number is:"<<reverse<<"end1";
	if(temp==reverse)
	{
		cout<<"it is pallindrome";
	}
	else
	{
		cout<<"it is not a pallindrome";
	}
	return 0;
}