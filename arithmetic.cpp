/*WAP to perform addition,subtraction,multiplication and division using pointer variable.*/
#include<iostream>
using namespace std;
void additionof(int &m,int &n)
{
    cout<<"\nSum: "<<m+n;	
}
void subtractionof(int &m,int &n)
{
	cout<<"\nSubtraction: "<<m-n;
}
void multiplication(int &m,int &n)
{
	cout<<"\nMultiplication: "<<m*n;
}
void divisionof(int &n,int &m)
{
	cout<<"\nDivision: "<<n/m;
}

int main()
{
	int a=78;
	int b=987;
	additionof(a,b);
	subtractionof(a,b);
	multiplication(a,b);
	divisionof(b,a);
}

