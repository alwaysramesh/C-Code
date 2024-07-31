#include <iostream>
using namespace std;
int main()
{
	int x;
	int rev=0;
	int r;
	cout<<"Enter four digit number: ";
	cin>>x;
	int actual=x;
    r = x%10;
	rev = rev*10 +r;
	x = x/10;
	r = x%10;
	rev = rev*10 +r;
	x = x/10;
	r = x%10;
	rev = rev*10 +r;
	x = x/10;
	r = x%10;
	rev = rev*10 +r;
	cout<<"Reverse number is: "<<rev<<endl;
    int ans;
    ans = rev-actual;
    cout<<"1257-7521= "<<ans;
  return 0;
}
