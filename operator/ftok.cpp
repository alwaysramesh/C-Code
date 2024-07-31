#include <iostream>
using namespace std;
int main()
{
	 float k,f;
    cout<<"Enter the temp in fahrenheit: ";
    cin>>f;
    k = (f-32)*(5.0 / 9.0)+ 273.15;
    cout<<"Temp in kelvin: "<<k<<"k"<<endl;
  
  return 0;
}
