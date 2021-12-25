#include<iostream>
using namespace std;
class Array
{
	public:
	int a[5];
	void getarray();
	void display();
	
};

void Array ::getarray()
{
	for (int i=0;i<5;i++)
	{
	    this->a[i]=a[i];	
	}
}

void Array::display()
{
	for(int i=0;i<5;i++)
	{
		cout<<"\t"<<this->a[i];
	}
}

void calculate(Array a,Array b)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<a.a[i]+b.a[i];
	}
    
}

int main()
{
	Array a1={45,78,62,43,31};
	Array a2={65,24,83,37,50};
	cout<<"\nArray 1:";
	a1.display();
	cout<<"\nArray 2:";
	a2.display();
	cout<<"\nAddition Of Arrays:";
	calculate(a1,a2);
	return 0;
}
