#include <iostream>
using namespace std;
int main()
{
	char employee;
	int age;
	 int f,m;
	cout<<"you are Male or Female: ";
	cin>>employee;
	cout<<"Enter your age: ";
	cin>>age;
	if(employee=='m')
	{
	
	  if(age>=90)
	    { 
		cout<<"pention is 4000"<<endl;
     	
      } 
	  else if (age>=60)
	    {
		cout<<"pention is 6000"<<endl;
	    }
	   else 
	    {
		cout<<"pention is 0";
	    }


    } 
	else if(employee == 'f' )
	  {
	
	     if(age>=90)
	       {   
	    	cout<<"pention is 3000"<<endl;
	       }
	    else if(age>=60)
        	{
		cout<<"pention is 5000"<<endl;
	       }
    	else if(age<60)
	      {
	    	cout<<"pention is 0";
	     }
}
	

  return 0;
}
