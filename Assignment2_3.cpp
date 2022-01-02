#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b;
	cout<<"\nEnter two Numbers:";
	cin>>a>>b;
	
	cout<<"\nAddition of Numbers:"<<a+b;
	cout<<"\nSubtraction of Numbers:"<<abs(a-b);
	cout<<"\nMultiplication of Numbers:"<<a*b;
	cout<<"\nDivision of Numbers:";
	if(a>b)
	cout<<"\t"<<a/b;
	else
	cout<<"\t"<<b/a;
	return 0;
}
