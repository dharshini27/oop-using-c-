#include<iostream>
using namespace std;
int main()
{
	char input,alphabet ='A',i,j;
	cout<<"enter the capital letter you want to  print in last row :";
	cin>>input;
	
	for(i=1;i<=(input-'A'+1);i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<alphabet<<"";
		}
		++alphabet;
		cout<<"end1";
	}
	return 0;
}