#include<iostream>
using namespace std;
class Array
{
	public:
		int a[10];
	void getArray();
	void getEven();
	void getOdd();
		
};

void Array::getArray()
{
	int i;
	for(i=0;i<10;i++)
	{
		this->a[i]=a[i];
	}
}

void Array::getEven()
{
	cout<<"\nEven Numbers in Array:";
	for (int j=0;j<10;j++)
	{
			if(a[j]%2==0)
		  cout<<"\t"<<a[j];
	}
}

void Array::getOdd()
{
	cout<<"\nOdd Numbers in Array:";
	for (int j=0;j<10;j++)
	{
			if(a[j]%2==1)
		  cout<<"\t"<<a[j];
	}
}
int main()
{
	Array x={17,28,99,45,72,36,53,61,23,96};
	x.getArray();
	x.getEven();
	x.getOdd();
}
