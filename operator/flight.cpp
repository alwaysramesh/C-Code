#include <iostream>
using namespace std;
int main()
{  //aeroplane berth
	int berth;
	cout<<"Enter your seat number: ";
	cin>>berth;
	int ans= berth%30;
	if(ans==1 || ans==7 || ans==6 || ans==12)
	{
		cout<<"Window seat"<<endl;
	}
	else if(ans==2 || ans==8 || ans==5 || ans==11 )
	{
		cout<<"middle seat "<<endl;
	}
	else if(ans==3 || ans==9 || ans==4 || ans==10)
	{
		cout<<"corner seat "<<endl;
		
	}
   else if(ans==13 || ans==19 || ans==18 || ans==24)
	{
		cout<<"Window seat"<<endl;
	}
	else if(ans==15 || ans==21 || ans==16 || ans==22 )
	{
		cout<<"corner seat "<<endl;
	}
	else if(ans==14 || ans==20 || ans==17 || ans==23)
	{
		cout<<"middle seat "<<endl;
		
	}
	else if(ans==25 || ans==30)
	{
		cout<<"window seat";
	}
	else if(ans ==26 || ans==29)
	{
		cout<<"middle seat";
	}
	else if(ans==27 || ans==28)
	{
		cout<<"corner seat";
	}
	else
	{
		cout<<"not available seat";
	}
  return 0;
}
