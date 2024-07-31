#include <iostream>
using namespace std;
int main()
{
	int P,C,M,H,E,r,t; 
	cout<<"Enter your P,C,M,H and E: ";
	cin>>P>>C>>M>>H>>E;
	t=P+C+M+H+E;
	r=t/5.0;
	if(r>=91 && r<=100)
	{
		cout<<"Grade is:?? A+"<<endl;
	}
	if(r>=81 and r<=90)
	{
		cout<<"Grade is:  A"<<endl;
	}
	if(r>=71 && r<=80)
	{
		cout<<"Grade is: B+"<<endl;
		
	}
	if(r>=61 && r<=70)
	{
		cout<<"Grade is: B"<<endl;
	}
	if(r>=33 && r<=60)
	{
		cout<<"Grade is: C"<<endl;
	}
	

  return 0;
}
