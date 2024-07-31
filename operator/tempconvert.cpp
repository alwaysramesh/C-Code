#include <iostream>
using namespace std;
int main()
{
	float ftemp;
	cout<<"Enter temparature in fahrenheit: ";
	cin>>ftemp;
	int ctemp=(ftemp-32)*5/9;
	cout<<"Evailuation in celsius is: "<<ctemp<<endl;

  return 0;
}
