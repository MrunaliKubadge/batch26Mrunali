#include<iostream>
using namespace std;

int main()
{
	int i,j,fact;
	
	for(i=1;i<=10;i++)
	{
		fact=1;
		for(j=i;j<=2;j--)
		{
			fact=fact*j;
		}
		cout<<"\nFactorial of "<<i<<":"<<fact;
	}
}
	
	


