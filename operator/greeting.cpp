#include <iostream>
using namespace std;
int main()
{  /* Write a C++ program that takes an integer input representing the hour of the day (0-23) and 
outputs an appropriate greeting:

"Good Morning" for 0-11
"Good Afternoon" for 12-17
"Good Evening" for 18-23 */
    int time;
    cout<<"Enter hour: ";
    cin>>time;
    if(time>=0 && time<=11)
    {
    	cout<<"Good morning";
	}
	else if(time>=12 && time<=17)
	{
		cout<<"Good afternoon";
	}
	else if(time>=18 && time<23)
	{
		cout<<"Good Evening";
	}
	else
	{
		cout<<"wrong time";
	}

  return 0;
}
