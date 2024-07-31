#include <iostream>
using namespace std;
int main()
{
	char n;
	cout<<"Enter anything: ";
	cin>>n;
	switch(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'|| n=='A' || n=='E' || n=='I' || n=='O'  || n=='U')
	{
		case 1:
			{
				cout<<"enter char is vowel";
				break;
			}
			case 0:
				{
					switch(n>='a' && n<='z')
					{
						case 1:
							{
								cout<<"Enter number is consonant";
								break;
							}
					}
				}
	}


  return 0;
}
