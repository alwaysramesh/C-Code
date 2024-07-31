#include <iostream>
using namespace std;
int main()
{ /* Write a C++ program that takes an integer input between 1 and 7 and outputs the corresponding 
   day of the week. Use the following mapping:
1: Monday
2: Tuesday
3: Wednesday
4: Thursday
5: Friday
6: Saturday
7: Sunday */
     int n;
     cout<<"Enter a number 1-7: ";
     cin>>n;
     if(n==1)
     {
     	cout<<"Monday";
	 }
	 else if(n==2)
	 {
	 	cout<<"Tuesday";
	 }
	 else if(n==3)
	 {
	 	cout<<"Wednesday";
	 }
	 else if(n==4)
	 {
	 	cout<<"Thursday";
	
	 }
	 else if(n==5)
	 {
	 	cout<<"friday";
	 }
	 else if(n==6)
	 {
	 	cout<<"Satuarday";
	 }
	 else if(n==7)
	 {
	 	cout<<"Sunday";
	 }
	 else
	 {
	 	cout<<"Wrong number enter";
	 }

  return 0;
}
