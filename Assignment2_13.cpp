#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Shoppe
{
	public:
	char sname[20];
	char location[20];	
};

class customer
{
	public:
	char cname[20];
	double phnNo;
};

void show(Shoppe x)
{
	cout.setf(ios::right);
	cout<<setw(15)<<"\n"<<x.sname
	<<setw(15)<<"\t"<<x.location;
}

void show(customer x)
{
	cout.setf(ios::right);
	cout<<setw(15)<<"\n"<<x.cname
	<<setw(15)<<"\t"<<x.phnNo;
}

int main()
{
	Shoppe s1;
	customer c1;
	strcpy(s1.sname,"The Laptop Shop");
	strcpy(s1.location,"Sangli");
	show(s1);
	
	strcpy(c1.cname,"Mrunali");
	c1.phnNo=9767814635;
    show(c1);
	return 0;
}
