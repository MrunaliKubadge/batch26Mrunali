#include<iostream>
#include<string.h>
using namespace std;
class mfgDept
{
	private:
	char admin_name[10];
	public:
	int total_emp;
	void createRecord(char admin_name[],int total_emp)
    {
 	    strcpy(this->admin_name,admin_name);
 	    this->total_emp=total_emp; 
    }	
	void show()
	{
		cout<<"\n"<<this->admin_name<<"\t"<<this->total_emp;
	}
	char* getname()
	{
		return this->admin_name;
	}
};

class prodDept
{
	private:
	char admin_name[10];
	public:
	int total_emp;
	void createRecord(char admin_name[],int total_emp)
    {
 	    strcpy(this->admin_name,admin_name);
 	    this->total_emp=total_emp; 
    }
	void show()
	{
		cout<<"\n"<<this->admin_name<<"\t"<<this->total_emp;
	}
	char* getname()
	{
		return this->admin_name;
	}	
	
};

class accDept
{
	private:
	char admin_name[10];
	public:
	int total_emp;
	void createRecord(char admin_name[],int total_emp)
    {
 	    strcpy(this->admin_name,admin_name);
 	    this->total_emp=total_emp; 
 	    
    }
	void show()
	{
		cout<<"\n"<<this->admin_name<<"\t"<<this->total_emp;
	}
	char* getname()
	{
		return this->admin_name;
	} 	
};

void compareDept(mfgDept a,prodDept b,accDept c);
bool sameDeptadmin(mfgDept a,prodDept b,accDept c);

int main()
{
	mfgDept e1;
	prodDept e2;
	accDept e3;
	e1.createRecord("Manufacturer",50);
	e2.createRecord("Producer",60);
	e3.createRecord("Accountant",120);
	
	e1.show();
	e2.show();
	e3.show();
	compareDept(e1,e2,e3);
	bool a=sameDeptadmin(e1,e2,e3);
	if(a)
	cout<<"\nAdmin are same for all Departments;";
	else
	cout<<"\nNULL";
	return 0;
}

void compareDept(mfgDept a,prodDept b,accDept c)
{
	if(a.total_emp<b.total_emp && a.total_emp<c.total_emp)
	cout<<"\nManufacturing Department have Minimum Employees";
	else if(b.total_emp<c.total_emp)
	cout<<"\nProduction Department have Minimum Employees";
	else
	cout<<"\nAccount Department have Minimum Employees";
}

bool sameDeptadmin(mfgDept a,prodDept b,accDept c)
{
	char p[10],q[10],r[10];
	strcpy(a.getname(),p);
	cout<<p;
	strcpy(b.getname(),q);
	cout<<q;
	strcpy(c.getname(),r);
	cout<<r;
	if(strcmpi(p,q)==0 && strcmpi(q,r)==0)
	{
		return true;
	}
	else
	return false;
}


