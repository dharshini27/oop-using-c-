#include<iostream>
using namespace std;
int main()
{
	int n,i,k;
	cout<<"enter the positive number for multiplication :";
	cin>>n;
	cout<<"enter the positive number for end multiplication :";
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cout<<n<<"*"<<i<<"=" <<n*i <<"end1";
	}
	return 0;
}