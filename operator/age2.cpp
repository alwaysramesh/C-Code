#include <iostream>
using namespace std;
int main()
{  /* Write a C++ program that takes an integer input representing a person's age and outputs the 
corresponding age group:

Child: 0-12 years
Teen: 13-17 years
Adult: 18-64 years
Senior: 65 years and above */
  int age;
    cout<<"Enter your age: ";
    cin>>age;
     if(age>0 && age<=12)
     {
	    cout<<"You are child";
     }
     else if(age>13 && age<=17)
     {
	    cout<<"You are teenage";
     }
     else if(age>18 && age<=64)
     {
	    cout<<"Yor are adult";
     }
     else if(age>65)
     {
	    cout<<"your are senior";
     }


  return 0;
}
