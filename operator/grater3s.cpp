#include <iostream>
using namespace std;
int main()
{
	int a,b,c,ans;
	cout<<"enter 1st,2nd,3rd  no.: ";
	cin>>a>>b>>c;
	if(a>=b && a>=c)
	{
		cout<<"1st is grater"<<endl;
	}
	if(b>=a && b>=c)
	{
		cout<<"2nd is grater"<<endl;
	}
	if(c>=a && c>=b)
	{
		cout<<"3rd is grater"<<endl;
	}
	if(a<b && a<c)
	{
		cout<<"1st is minimum"<<endl;
	}
	if(b<a && b<c)
	{
		cout<<"2nd is minimum"<<endl;
	}
	if(c<a && a<b)
	{
		cout<<"3rd is minimum"<<endl;
	}

  return 0;
}
