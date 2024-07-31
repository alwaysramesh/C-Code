#include <iostream>
using namespace std;
int main()
{
	int p,m,c;
	float r,t;
	cout<<"Enter marks of p,c,m ";
	cin>>p>>c>>m;
	t=p+c+m;
	r=t/3.0;
	if(r>=50)
	{
		cout<<"you are pass"<<endl;
		
	}
	else
	{
		cout<<"you are fall";
	}

  return 0;
}
