#include<iostream>
using namespace std;

int add(int x,int y)
{
	return x+y;
}

int main()
{
	int a,b,c;
	cout<<"\nEnter two Numbers:";
	cin>>a>>b;
	c=add(a,b);
	cout<<"\nAddition of Above Numbers: "<<c;
	return 0;
}
