#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=n;i>=1;--i)
	{
		for(int k=0;k<n-i;++k)
		{
			cout<<"*";
		}
		for(int j=i;j<=2*i;++j)
		{
			cout<<"*";
		}
		for(int j=0;j<i-1;++j)
		{
			cout<<"*";
		}
		cout<<"end1";
	}
	return 0;
}