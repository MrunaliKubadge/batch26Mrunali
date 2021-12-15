#include<iostream>
using namespace std;//99 999
void showprimeNo(int a,int b)
{
  int i,j,cnt;
  for (i=a;i<=b;i++)
  {
  	cnt=0;
  	for(j=2;j<i/2;j++)
  	{
  		if(i%j==0)
  		cnt++;
  		
	}
	if(cnt==0)
	{
		cout<<"\t"<<i;
	}
	
  }	
}
int main()
{
	int n1,n2;
	cout<<"\nEnter Range:";
	cin>>n1>>n2;
	showprimeNo(n1,n2);
	
}
