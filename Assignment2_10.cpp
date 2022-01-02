#include<iostream>
using namespace std;

class SBIBank
{
	public:
	int pin;
	char name[20];
	int amt,years=5;
	void openFDAcc(int amt,int years)
	{
	
		this->years=years;
		this->amt=amt;
		cout<<"\nFD Account opened SucessFully."
		<<"\nSBI00"<<this->pin
		<<"\t"<<this->name
		<<"\tRs."<<this->amt
		<<"\t"<<this->years;
	}
	
};
int main()
{
	SBIBank b;
	cout<<"\nEnter Name of Account Holder:";
	cin>>b.name;
	cout<<"\nEnter 4 digit Account No.: SBI00";
	cin>>b.pin;
	b.openFDAcc(10000,6);
	return 0;
}
