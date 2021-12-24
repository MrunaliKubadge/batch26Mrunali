#include<iostream>
#include<string.h>
using namespace std;

void swapNumbers(int x,int y)
{
	x=x*y;
	y=x/y;
	x=x/y;
	cout<<"\nNumbers after Swapping:\na= "<<x<<"\tb= "<<y;
}

int main()
{
	int a,b;
	cout<<"Enter Two Numbers:";
	cin>>a>>b;
	swapNumbers(a,b);	
	return 0;
}
