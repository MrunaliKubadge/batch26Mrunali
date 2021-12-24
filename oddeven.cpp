#include<iostream>
#include<iomanip>
using namespace std;

void getEven()
{
	cout<<"\nEven Numbers between Given Range:";
	for (int j=60;j<250;j++)
	{
			if(j%2==0)
		  cout<<"\t"<<j;
	}
}
void getOdd()
{
	cout<<"\nOdd Numbers between Given Range:";
	for (int j=60;j<250;j++)
	{
			if(j%2==1)
		  cout<<"\t"<<j;
	}
}

int main()
{
	int n1=60,n2=250;
	int i,n;
	getEven();
	getOdd();
	return 0;
}


