#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class MktDept
{
	public:
	char EmpName[20];
	int sal;
	void show()
{
	cout.setf(ios::right);
	cout<<setw(15)<<"\n"<<EmpName<<setw(7)<<"\t"<<sal;
}
};

class ProdDept
{
	public:
	char EmpName[20];
	int sal;
	void show()
{
	cout.setf(ios::right);
	cout<<setw(15)<<"\n"<<EmpName<<setw(7)<<"\t"<<sal;
}
};

void comparebySalary(MktDept m,ProdDept p)
{
	cout<<"\nEmployee with maximum Salary:";
	if (m.sal>p.sal)
	m.show();
	else
	p.show();
}

int main()
{
	MktDept x;
	ProdDept y;
	strcpy(x.EmpName,"Rushikesh");
	x.sal=150000;
	
	strcpy(y.EmpName,"Vikram");
	y.sal=180000;
	
	x.show();
	y.show();
	comparebySalary(x,y);
	
}

