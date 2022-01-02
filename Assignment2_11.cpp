#include<iostream>
#include<string.h>
using namespace std;

class Accessories
{
	int accNo,warranty;
	char name[20];
	float price;
	
    void addAccessory(int accNo,char name[],float price,int warranty)
    {
    	this->accNo=accNo;
    	strcpy(this->name,name);
    	this->price=price;
    	this->warranty=warranty;  
	}
	void  display()
}
int main()
{
	Accessories a1,a2,a3;
	
	return 0;
}
