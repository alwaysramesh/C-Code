#include <iostream>
using namespace std;
int main()
{
/* Write a C++ program that takes two integers and a character representing an arithmetic operation (+, -, *, /) 
and performs the corresponding operation. 
If the operation character is not one of the specified characters, output an error message. */
   int x,y,ans;
   int ans=0;
   cout<<"Enter two value x and y: ";
   cin>>x>>y;
   cout<<"Enter operation: ";
   cin>>+>>-;
   if(ans= +)
   {
   	ans=x+y;
   	cout<<"addition: "<<ans;
   }
   else if(ans= -)
   {
   	ans=x-y;
   	cout<<"substraction: "<<ans;
   }
  return 0;
}
