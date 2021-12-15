#include<iostream>
using namespace std;
int maxNo(int m,int n,int p)
{
	int x;
	x=p<n&&m<n?n:m<p?p:m;
	return x;
}
int main()
{
	int a,b,c,max;
	cout<<"\nEnter 3 Numbers:";
	cin>>a>>b>>c;
	max=maxNo(a,b,c);
	cout<<"\nMaximum Number: "<<max;
}
