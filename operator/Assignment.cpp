#include <iostream>
using namespace std;
int main()
{//Assignment operator
   int a,b,e,p,m,d;
   cout<<"Enter a number of a: ";
   cin>>a;
   cout<<"Enter a number of b: ";
   cin>>b;
   a*=b;
   cout<<"a*=b: "<<a<<endl;
   e = a+=b;
   cout<<"a+=b: "<<e<<endl;
   p = a-=b;
   cout<<"a-=b: "<<p<<endl;
   m = a/=b;
   cout<<"a/=b: "<<m<<endl;
   d = a%=b;
   cout<<"a%=b: "<<d<<endl;
   

  return 0;
}
