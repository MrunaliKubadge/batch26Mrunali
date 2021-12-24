#include<iostream>
using namespace std;
int findbymin(int a[])
{
	int i,x,min;
	min=a[0];
    for(i=1;i<5;i++)
    {
    	if(min>a[i])
    	{
    		min=a[i];
		}
    }
    return min;
}

int main()
{
	int a[5]={55,24,16,74,38};
	int x=findbymin(a);
	cout<<"\nMinimum Value in Array:"<<x;
}
