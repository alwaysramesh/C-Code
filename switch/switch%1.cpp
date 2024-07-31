#include <iostream>
using namespace std;
int main()
{
	/* WAP to print grade of student 
i) 100-81 A+
ii) 70-61 A 
iii) 50-41 B+
iv)40-35 C 
v) 34-0  fail 

 */
    int n;
    cout<<"Enter a your %: ";
    cin>>n;
    switch(n<=100 && n>=81)
    {
    	case 1:
    		{
    			cout<<"A+";
    			break;
			}
			case 0:
				{
					switch(n<=70 && n>=61)
					{
						case 1:
							{
								cout<<"A";
								break;
							}
							case 0:
								{
									switch(n<=50 && n>=41)
									{
										case 1:
											{
												cout<<"B+";
												break;
											}
											case 0:
												{
													switch(n<=34 && n>0)
													{
														case 1:
															{
																cout<<"fail";
																break;
															}
													}
												}
									}
								}
					}
				}
	}
  return 0;
}
