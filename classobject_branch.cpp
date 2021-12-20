#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Branch
{
	public:
	int branch_Id;
	char branchName[20]; 
	char city[20];
	int  members;
	
	void getdata(int branch_Id,char branchName[],char city[],int  members)
	{
		this->branch_Id=branch_Id;
		strcpy(this->branchName,branchName);
		strcpy(this->city,city);
		this->members=members;
	}
	
	void Display()
	{
		
		cout<<setw(5)<<"\n"<<this->branch_Id
		<<setw(40)<<"\t"<<this->branchName
		<<setw(20)<<"\t"<<this->city
		<<setw(5)<<"\t"<<this->members;
	}
};

int main()
{
	Branch b1,b2,b3;
	b1.getdata(1578,"Research And Development","Pune",458);
	b2.getdata(1595,"Design and Process Planning","Chennai",256);
	b3.getdata(1543,"Production And Quality Control","Bangalore",1576);
	
	b1.Display();
	b2.Display();
	b3.Display();
	
}
