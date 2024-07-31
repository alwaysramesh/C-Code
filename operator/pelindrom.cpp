#include <iostream>
using namespace std;
int main()
{
   int n,m,ans;
   int sum = 0;
   cout<<"Enter number: ";
   cin>>n;
   int a=n;
   m = n%10;
   sum = (sum*10) + m;
   n = n/10;
   if(sum==0)
   {
   
   cout<"This is reverse number: " <<sum<<endl;
}
  return 0;
}
