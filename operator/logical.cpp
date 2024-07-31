#include <iostream>
using namespace std;
int main()
{ //logical operator
   int x,y,z;
   cout<<"Enter a number of x: ";
   cin>>x;
   cout<<"Enter a number of y: ";
   cin>>y;
   cout<<"Enter a number of z: ";
   cin>>z;
   (x>0 && y>0 && z>0) ? (cout<<"Three number of positive"):(cout<<"all number not positive");
    
  return 0;
}
