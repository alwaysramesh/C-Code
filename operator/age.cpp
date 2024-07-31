#include <iostream>
using namespace std;
int main()
{ /*Enter your age if age is :-
         Age<0 = not birth 
        0-11 = child 
       11-18 =  Teenage 
       18-45 = young 
       45-60= experience 
       60 above = old age 
 */
     int age;
     cout<<"Enter your age: ";
     cin>>age;
     if(age<=0)
     {
     	cout<<"not birth";
	 }
	 else if(age>0 && age<=11)
	 {
	 	cout<<"you are child"<<endl;
	 }
	 else if(age>11 && age<=18)
	 {
	 	cout<<"Your are teenage"<<endl;
	 }
	 else if(age<19 && age<=45)
	 {
	 	cout<<"You are young"<<endl;
	 }
	 else if(age<=60)
	 {
	 	cout<<"you have experience"<<endl;
	 }
	 else if(age>60)
	 {
	 	cout<<"You are old";
	 }

  return 0;
}
