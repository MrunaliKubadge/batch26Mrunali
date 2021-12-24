#include<iostream>
using namespace std;

float billAmt( float a);

int main()
{
	float price;
	cout<<"\nPrice of Product:";
	cin>>price;
	float bill=billAmt(price);
	cout<<"\nTotal Bill Amount with Discount:Rs  "<<bill;
	return 0;
}

float billAmt( float a)
{
	float total;
	if(50<a && a<100)
		total=a+a*0.025;
	
	else if(100<a && a<200)
		total=a+a*0.05;
	
	else if(a>200)
		total=a+a*0.07;
	
	else
	total=a;
	
	return total;
}
