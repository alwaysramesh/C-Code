#include <iostream>
using namespace std;
int main()
{ /* Write a C++ program that takes a floating-point number representing a temperature in Celsius and 
classifies it as:

"Freezing" if the temperature is below 0
"Cold" if the temperature is between 0 and 10
"Warm" if the temperature is between 10 and 25
"Hot" if the temperature is above 25 */
    float temp, ans;
    cout<<"Celsius: ";
    cin>>temp;
    if(temp<0)
    {
    	cout<<"Freezing";
	}
	else if(temp>=0 && temp<=10)
	{
		cout<<"Cold";
	}
	else if(temp>=11 && temp<=25)
	{
		cout<<"Warm";
	}
	else if(temp>26)
	{
		cout<<"Hot";
	}

  return 0;
}
