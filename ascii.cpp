#include<iostream>

using namespace std;
int ASCIIvalue(char m)
{
    int b;
	b=int(m);
	return b;	
}

int main()
{
	char a;
	int n;
	cout<<"Enter any character:";
	cin>>a;
	n=ASCIIvalue(a);
	cout<<"\nASCII vslue of "<<a<<" is "<<n;
}
