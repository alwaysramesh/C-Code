#include <iostream>
using namespace std;
int main()
{ // leap year
   int year;
   cout<<"Enter an year: ";
   cin>>year;
   if(year%400==0)
   {
   	cout<<"Leap year"<<endl;
   }
   else if(year%4==0)
   {
   	cout<<"Leap year"<<endl;
   }
   else
   {
   
   cout<<"Not a leap year";
   }

  return 0;
}
