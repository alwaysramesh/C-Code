#include <iostream>
using namespace std;
int main()
{ //Relational Operator
   int x,y;
   cout<<"Enter a number of x: ";
   cin>>x;
   cout<<"Enter a number of y: ";
   cin>>y;
   int a,b,c,d,e,f;
   a = x==y;
   b = x!=y;
   c = x<y;
   d = x>y;
   e = x<=y;
   f = x>=y;
   cout<<"x==y: "<<a<<endl;
   cout<<"x!=y: "<<b<<endl;
   cout<<"x<y: "<<c<<endl;
   cout<<"x>y: "<<d<<endl;
   cout<<"x<=y: "<<e<<endl;
   cout<<"x>=y: "<<f<<endl;
   cout<<"------------------------";

  return 0;
}
