#include <iostream>
using namespace std;
int main()
{
    int a=12, ans;
    int b=13;
    ans=a&b;
    cout<<ans<<endl;
    ans=a|b;
    cout<<"a|b: "<<ans<<endl;
    ans= a>>2;
    cout<<"a>>b: "<<ans<<endl;
    ans= a<<2;
    cout<<"a<<2: "<<ans<<endl;
    ans = a^b;
    cout<<"a^b: "<<ans<<endl;
    //complement bitwise
    ans= ~a;
    int ans1= ~b;
    cout<<"~a: "<<ans<<"  ~b: "<<ans1;
    return 0;
}
