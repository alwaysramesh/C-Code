#include <iostream>
using namespace std;
int main()
{ /* Q.1) If your salary is more than 50000 and your credit score is greater
 than 7 then you sanctioned the loan */
 float credit, salary;
 cout<<"Enter your salary: ";
 cin>>salary;
 cout<<"Entre credit score: ";
 cin>>credit;
 if(salary>=50000)
 {
 	if(credit>=7 && credit<=9)
 	{
 		cout<<"Sanctioned your loan";
	 }
 }
 else
 {
 	cout<<"we can't give loan";
 }

  return 0;
}
