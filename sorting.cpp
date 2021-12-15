#include<iostream>
using namespace std;
void sortArray(int a[])
{
 int i,k,key;
for(i=1;i<5;i++)
{
	key=a[i];
	k=i-1;
	 while (a[k]>key)	
    {
      	a[k+1]=a[k];
		k--;if(k==-1)//5,24,16,74,56
      	break;
		
	}
	a[k+1]=key;
}

}
void show(int a[])
	{
	    for (int i=0;i<5;i++)
	    {  
		    cout<<"\t"<<a[i];
	    }
	}
int main()
{
	int a[5]={5,24,16,74,38};
	sortArray(a);
	show(a);
	
}
