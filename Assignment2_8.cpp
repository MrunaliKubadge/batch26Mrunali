/*WAP to create a class Integer and declare a data member no. use different 3 objects to
 store the values and display maximum number from it*/
#include<iostream>
using namespace std;

class Integer
{
	public:
	int no;
};

int maxno(int x,int y,int z)
{
	int max=x>y && x>z?x:y>z?y:z;
	return max;
}
int main()
{
	Integer a,b,c;
	a.no=5698;
	b.no=8974;
	c.no=23578;
	int m=maxno(a.no,b.no,c.no);
	cout<<"\nMaximum Integer: "<<m;
	return 0;
	
}
