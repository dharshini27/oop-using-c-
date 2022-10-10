#include <iostream>
using namespace std;

int main()
{
   char X;
   cout<<"Enter a character:"; 
   cin>>X;
   X=X+32;
   cout<<"Converted character to lowercase:";
   cout<<X;
   return 0;
}