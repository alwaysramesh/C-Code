#include <iostream>
using namespace std;
int main()
{ /* Write a C++ program that calculates the electricity bill based on the units consumed and the 
following tariff structure:

Up to 100 units: $0.50 per unit
101-200 units: $0.75 per unit
201-300 units: $1.20 per unit
Above 300 units: $1.50 per unit */
float unit,$;
cout<<"Enter your unit: ";
cin>>unit;
if(unit>0 && unit<=100)
{
	unit= unit*0.50;
	cout<<"Electricity bill is: "<<unit<<" $"<<endl;
}
else if(unit>101 && unit<=200)
{
	unit=unit*0.75;
	cout<<"Electricity bill is: "<<unit<<" $";
	
}
else if(unit>201 && unit<=300)
{
	unit=unit*1.20;
	cout<<"Electricity bill is: "<<unit<<" $";
}
else if(unit>301)
{
	unit=unit*1.50;
	cout<<"Electricity bill is: "<<unit<<" $";
}

  return 0;
}
