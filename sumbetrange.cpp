#include<iostream>
using namespace std;

int sumbetNos(int m,int n)
{
	int i,add;
	for (i=m;i<n;i++)
	{
		add=add+i;
	}
	return add;
}

int main()
{
	int a,b,sum;
	cout<<"\nEnter Number range:";
	cin>>a>>b;
	sum=sumbetNos(a,b);
	cout<<"\nSum of all between numbers"<<a<<" & "<<b<<": "<<sum;
}
