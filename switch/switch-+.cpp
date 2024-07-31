#include <iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    switch(n>0)
    {
    	case 1:
    		{
    			cout<<"Number is +ve";
    			break;
			}
			case 0:
				{
					switch(n<0)
					{
						case 1:
							{
								cout<<"number is -ve";
								break;
							}
							case 0:
								{
									switch(n==0)
									{
										case 1:
											{
												cout<<"zero";
												break;
											}
									}
								}
					}
				}
	}

  return 0;
}
