#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double number, sqrtResult;
	
	cout << "\nPlease Enter any Number to find Square root =  ";
	cin >> number;
	
	sqrtResult = sqrt(number);
	
	cout << "\nThe Sqauer root of a " << number << " = " << sqrtResult;
	
 	return 0;
}
