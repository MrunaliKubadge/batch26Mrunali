/*WAP to input an array of 10 elements and display addition of all elements.
 Also Display even and odd numbers from it*/
#include<iostream>
using namespace std;

void addArray(int a[])
{
	int sum,i;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	cout<<"\nSum of all Array Elements: "<<sum;
}

void oddArray(int a[])
{
	cout<<"\nOdd Numbers in Array:";
	for(int i=0;i<10;i++)
	{
		if(a[i]%2==1)
			cout<<"\t"<<a[i];	
	}
}

void evenArray(int a[])
{
	cout<<"\nEven Numbers in Array:";
	for(int i=0;i<10;i++)
	{
		if(a[i]%2==0)
			cout<<"\t"<<a[i];	
	}
}

int main()
{
	int a[10];
	int i;
	cout<<"\nEnter Array elements:";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	addArray(a);
	oddArray(a);
	evenArray(a);
	return 0;
}


