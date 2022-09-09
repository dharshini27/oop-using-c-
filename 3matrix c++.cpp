#include<iostream>
using namespace std;
int main()
{
	int mat1[3][3],mat2[3][3],matsub[3][3],i,j;
	std::cout<<"enter the 9  elements of mat1";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		std::cin>>mat1[i][j];
	}
	std::cout<<"Enter the  9 elements of mat2";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	std::cin>>mat2[i][j];
    }
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	matsub[i][j]=mat1[i][j]-mat2[i][j];
	}
	std::cout<<"/n the new matrixes:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		std::cout<<matsub[i][j]<<"";
		std::cout<<"end1";
	}
	std::cout<<"end";
	return 0;
    
	
}