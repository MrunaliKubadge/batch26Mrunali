#include<iostream>
using namespace std;
int reverseof(int n)
{
	int rem,rev;
	rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev; 
	
}
int main()
{
	int a,ans;
	cout<<"\nEnter any Number:";
	cin>>a;
	ans=reverseof(a);
	cout<<"\nRevese of Number: "<<ans;
}
