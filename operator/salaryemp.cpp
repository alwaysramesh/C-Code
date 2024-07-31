#include <iostream>
using namespace std;
int main()
{ /*WAP to calculate salary of employee
 if employee is male then follow given below rule :- 
 i) basic salary (bs)
ii) DA = 40% of bs 
iii) TA = 15% of bs
iv) HRA = 20% of bs
V) PF =  -12  % of bs 
vi) TAX =  -10 % if your salary is above 100000 
 If employee is female then follow given below rule :- 
 i) basic salary (bs)
ii) DA = 50% of bs 
iii) TA = 10% of bs
iv) HRA = 0% of bs
V) PF =  -12  % of bs 
vi) TAX =  -20 % if your salary is above 100000 */
    float bs,da,ta,hra,pf,tax=0,gs;
	char employee;
	char m,f;
	string name;
    cout<<"Enter employee Male or Female: ";
    cin>>employee;
    
    cout<<"Enter employee name:";
    cin>>name;
    cout<<"enter your Basic salay:";
    cin>>bs;
    if(employee=='m')
    {
       da =bs*0.4;
	   ta =bs*0.15;
	   hra =bs*0.2;
	   pf =bs*0.12;
	   gs = bs+da+ta+hra-pf;
	   cout<<"gs is: "<<gs;
	   if(gs>100000)
	   {
	   	  tax=gs*0.1;
	   	  cout<<"da sal is: "<<da<<endl;
	   	  cout<<"ta sal is: "<<ta<<endl;
	   	  cout<<"hra sal is: "<<hra<<endl;
	   	  cout<<"pf sal is: "<<pf<<endl;
	   	  cout<<"gs sal is: "<<gs<<endl;
	   	  cout<<"tax sal is: "<<tax<<endl;
	   	  
		   }
		  }else if(employee =='f')
    {
       da =bs*0.5;
	   ta =bs*0.1;
	   hra =0;
	   pf =bs*0.12;
	   gs = bs+da+ta+hra-pf;
	   cout<<"gs is: "<<gs;
	   if(gs>100000)
	   {
	   	  tax=gs*0.2;
	   	  cout<<"da sal is: "<<da<<endl;
	   	  cout<<"ta sal is: "<<ta<<endl;
	   	  cout<<"hra sal is: "<<hra<<endl;
	   	  cout<<"pf sal is: "<<pf<<endl;
	   	  cout<<"gs sal is: "<<gs<<endl;
	   	  cout<<"tax sal is: "<<tax<<endl;
	   	  
		   }	
	}
    
  return 0;
}
