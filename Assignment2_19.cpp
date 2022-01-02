#include<iostream>
#include<string.h>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

float add(float a,float b,float c)
{
	return a+b+c;
}

void add(int a[],int b[])
{
    for(int i=0;i<5;i++)
	{
		cout<<"  "<<a[i]+b[i];
	}
}

int main()
{
	int x=45,y=79;
	float m=4598.358f,n=356.125f,o=157.986f;
	int j[5]={45,87,56,23,59};
	int k[5]={98,75,32,67,44};
	int z;
	float r;
	z=add(x,y);
	cout<<"\nAddition of Integers:"<<z;
	r=add(m,n,o);
	cout<<"\nAddition of Decimals:"<<r;
	cout<<"\nAddition of Array:";
	add(j,k);
	
	return 0;
	
}
