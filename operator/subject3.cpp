#include <iostream>
using namespace std;
int main()
{
	float p,c,m,t,per;
	cout<<"Enter your marks p,c,m:";
	cin>>p>>c>>m;
	t = p+c+m;
	per =t/3.0;
	cout<<"your per: "<<per<<"%"<<endl;
	if(p>=c && p>=m)
	{
		cout<<"Highest marks: p"<<endl;
	}
	if(m>=c && m>=c)
	{
		cout<<"Highest marks: c"<<endl;
	}
	if(m>=c && m>=p)
	{
		cout<<"Highest marks: m"<<endl;
	}

  return 0;
}
