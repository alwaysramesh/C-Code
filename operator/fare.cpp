#include <iostream>
using namespace std;
int main()
{
	int child ,Female  ,Male;
	cout<<"Enter the Number of Child = ";
	cin>>child;
	cout<<"Enter the number of Female = ";
	cin>>Female;
	cout<<"Enter the number of Male = ";
	cin>>Male;
	child = child* 12;
	Female = Female*15;
	Male = Male*20;
	cout<<"Total fare of Child :"<<child<<endl;
	cout<<"Total fare of Female :"<<Female<<endl;
	cout<<"Total fare of Male :"<<Male<<endl;
	cout<<"total fare of passenger"<<child+Female+Male;

  return 0;
}
