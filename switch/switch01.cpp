#include <iostream>
using namespace std;
int main()
{
 /* WAP to print week days . If user enter 1 then print Monday ,2 for Tuesday and so on */ 
   int week;
   cout<<"enter number: ";
   cin>>week;
   switch(week)
   {
   	case 1:
   		{
   			cout<<"monday";
   			break;
		   }
		   case 2:
		   	{
			   
		   	cout<<"tuesday";
		   	break;
		   }
		   case 3:
		   	{
		   		cout<<"wedensday";
		   		break;
			   }
			   case 4:
			   	{
			   		cout<<"Thursday";
			   		break;
				   }
				   case 5:
				   	{
				   		cout<<"Friday";
				   		break;
					   }
					   case 6:
					   	{
					   		cout<<"Satuarday";
					   		break;
						   }
						   case 7:
						   	{
						   		cout<<"Sunday";
						   		break;
							   }
		   	
   }
  return 0;
}
