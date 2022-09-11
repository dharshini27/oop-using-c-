#include<iostream>
using namespace std;
int main()
{
	int r,c,a[100][100],b[100][100],sum[100][100],i,j;
	cout<<"enter the number of rows between 1 to 100 :";
	cin>>r;
	
	cout<<"enter the number of column between 1 to 100 :";
	cin>>c;
	
	cout<<"enter the first matrix values :"<<"end1";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"enter the element a"<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
	}
	cout<<"enter the secomd m,atrix value :"<<"end1";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++);
		{
			cout<<"enter the element b"<<i+1<<j+1<<" : ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<r;i++);
	{
		for(j=0;j<c;j++);
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"the sum of the two matrix are :"<<"end1";
	for(i=0;j<r;i++)
	{
		for(j=0;j<c;j++);
		{
			cout<<sum[i][j]<<"end";
		}
	}
	return 0;
}