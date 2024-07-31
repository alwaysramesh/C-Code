#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   switch(n>=100 && n<=81)
   {
   	case 1:
   		{
   			cout<<"A";
   			break;
		   }
		   case 0:
		   	{
			   
		   switch(n>=80 && n<=61)
		   {
		   	case 2:
		   		{
		   			cout<<"B";
		   			break;
				   }
				   switch(n>=69 && n<=41)
				   {
				   	case 3:
				   		{
				   			cout<<"C";
				   			break;
						   }
						   switch(n>=20 && n<=31)
						   {
						   	case 4:
						   		cout<<"D";
						   }
				   }
		   }
   }
}

  return 0;
}
