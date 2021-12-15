#include<iostream>
using namespace std;

int searchArray(int b[],int n)
{
	int cnt=0;
   for (int i=0;i<5;i++)
	{
		if(n=b[i])
		{
			cnt++;
		}
	}
	return cnt;	
}

int main()
{
	int a[5]={45,78,125,196,256};
	int p,cnt; 
	cout<<"\nEnter element to be searched: ";
	cin>>p;
	cnt=searchArray(a,p);
	if(cnt==1);
	cout<<"\nElement is found";   
}
