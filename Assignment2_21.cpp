/*WAP to declare a class Enquiry and input Enqno, Date, Name of person, City and contact number. 
Input 3 Entries and display the details. The Program can also useful to find the 
Enquiry from particular City.*/
#include<iostream>
#include<string.h>
using namespace std;

class Enquiry
{
	public:
    int enqNo;
	char name[20],city[10],date[15];
	char phnNo[20];
	void addEnquiry(int enqNo,char name[],char city[],char phnNo[],char date[]);
	void display();
};

Enquiry findbyCity(Enquiry e[])
{
	char userip[20];
	cout<<"\nEnter city Name:";
	cin>>userip;
	for(int i=0;i<3;i++)
	{
		if(strcmpi(userip,e[i].city)==0)
		{
			return e[i];
		    break;
		}
		else 
		return e[-1];
	}
}

int main()
{
	Enquiry e[3];
	
	e[0].addEnquiry(652,"Jason Wood","London","6119856754","25/8/2006");
	e[1].addEnquiry(82,"Lily Collins","California","6522498756","2/6/2004");
	e[0].addEnquiry(459,"Cheryl Kingsley","Moscow","5648915756","6/12/2018");
	
	for(int i=0;i<3;i++)
	{
		e[i].display();
	}
	Enquiry ec=findbyCity(e);
	ec.display();
	return 0;
}  

void Enquiry:: addEnquiry(int enqNo,char name[],char city[],char phnNo[],char date[])
{
	this->enqNo=enqNo;
	strcpy(this->name,name);
	strcpy(this->city,city);
	strcpy(this->phnNo,phnNo);
	strcpy(this->date,date);
}
void Enquiry::display()
{
	cout<<"\n"<<this->enqNo
	<<"\t"<<this->name
	<<"\t"<<this->city
	<<"\t"<<this->phnNo
	<<"\t"<<this->date;
} 



