/*WAP to declare a class Enquiry and input Enqno, Date, Name of person, City and contact number. 
Input 3 Entries and display the details. The Program can also useful to find the 
Enquiry from particular City.*/
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Enquiry
{
	public:
    int enqNo;
	char name[20],city[10],date[15];
	double phnNo;
	void addEnquiry(int enqNo,char name[],char city[],double phnNo,char date[]);
	void display();
};

int main()
{
	Enquiry e1,e2,e3;
	
	e1.addEnquiry(652,"Jason Wood","London",6119856754,"25/8/2006");
	e2.addEnquiry(82,"Lily Collins","California",6522498756,"2/6/2004");
	e3.addEnquiry(459,"Cheryl Kingsley","Moscow",5648915756,"6/12/2018");
	
	e1.display();
	e2.display();
	e3.display();
	return 0;
}  

void Enquiry:: addEnquiry(int enqNo,char name[],char city[],double phnNo,char date[])
{
	this->enqNo=enqNo;
	strcpy(this->name,name);
	strcpy(this->city,city);
	this->phnNo=phnNo;
	strcpy(this->date,date);
}
void Enquiry::display()
{
	cout.setf(ios::right);
	cout<<setw(5)<<"\n"<<this->enqNo
	<<setw(15)<<"\t"<<this->name
	<<setw(10)<<"\t"<<this->city
	<<setw(15)<<"\t"<<this->phnNo
	<<setw(15)<<"\t"<<this->date;
} 

