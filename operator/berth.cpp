#include <iostream>
using namespace std;
int main()
{
    int berth;
    cout << "Enter the seat number: ";
    cin >>berth;

    int ans = berth % 8;

    if (ans ==1|| ans == 4) 
	{
        cout << "Lower Berth" << endl;
    }  
	if (ans == 2 ||ans == 5)
	 {
        cout << "Middle Berth" << endl;
    }  
	if (ans == 3 || ans == 6)
	 {
        cout << "Upper Berth" << endl;
    } 
	 if (ans == 7) 
	{
        cout << "Side Lower Berth" << endl;
    } 
	if (ans == 0) 
	{ 
        cout << "Side Upper Berth" << endl;
    } 

  return 0;
}
