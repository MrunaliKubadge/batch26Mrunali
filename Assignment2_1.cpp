#include<iostream>
using namespace std;

swapbyposition(int x)
{
	int z;
	z=(x/10000)*10000+(x%1000-x%100)*10+(x%10000-x%1000)/10+x%100;
	return z;
}

int main()
{
	int a;
	cout<<"\nEnter a 5 digit Number: ";
	cin>>a;
	
	int n=swapbyposition(a);
	cout<<"\nNumber after swapping 2nd ana 3rd digit:"<<n;
	return 0;
}
