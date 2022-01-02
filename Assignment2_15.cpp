#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Customer
{
	public:
	int Id;
	char name[20];
	char city[20];
     
	void addCustomer(int Id,char name[],char city[])
	{
		this->Id=Id;
		strcpy(this->name,name);
		strcpy(this->city,city);
	}  
	void display()
	{
		cout.setf(ios::left);
		cout<<setw(5)<<"\n"<<this->Id
		<<setw(10)<<"\t"<<this->name
		<<setw(10)<<"\t"<<this->city;
		}	
};

int main()
{
	Customer c[5];
	c[0].addCustomer(12,"Stefan Wood","London");
	c[1].addCustomer(9,"Archer Jofra","Newyork");
	c[2].addCustomer(25,"Chris Evans","Berlin");
	c[3].addCustomer(568,"Bai Ping Ting","Bejeing");
	c[4].addCustomer(236,"Mike Verstappen","Rome");
	
	for(int i=0;i<5;i++)
	{
		c[i].display();
	}
	return 0;
}
