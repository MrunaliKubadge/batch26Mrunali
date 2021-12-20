#include<iostream>
using namespace std;

float calculate(int a,float b)
{
	return a*b;
}

int main()
{
	int qty;
	float price,Bill;
	cout<<"Enter Price of Product:";
	cin>>price;
	cout<<"Enter Quantity:";
	cin>>qty;
	Bill=calculate(price,qty);
	cout<<"\nTotal Bill Amount : Rs"<<Bill;
}
