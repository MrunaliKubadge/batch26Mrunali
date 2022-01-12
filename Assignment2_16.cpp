#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Account
{
	private:
	struct ACC
	{
		double accNo;
	    char name[20];
	    float balance;
	}ACC[10];
	public:
	int ch;
	int index=0;
	void getChoice();
	void show(int index);
	void openAccount();
	void viewAccount();
	void depositAmt();
	void withdrawAmt();
	void viewBalance();
	void searchAcc();
	
};

int main()
{
	Account a;
	a.getChoice();
	return 0;
}

void Account::getChoice()
{
	while(1)
	{
	    cout<<"\n1.Open Account";
        cout<<"\n2.View Account";
        cout<<"\n3.Deposit Amount";
        cout<<"\n4.Withdraw Amount";
        cout<<"\n5.View Balance";
        cout<<"\n6.Search Account";
        cout<<"\n7.Exit";
        cout<<"\nEnter Choice:";
        cin>>ch;
    switch(ch)
    {
    	case 1:
    	    Account::openAccount();
    		break;
    	case 2:
    		Account::viewAccount();
    		break;
    	case 3:
			Account::depositAmt();
			break;
		case 4:
			Account::withdrawAmt();
			break;
		case 5:
			Account::viewBalance();
			break;
		case 6:
			Account::searchAcc();
			break;
		case 7:
			cout<<"\nYou have terminated Process...!";
			exit(0);
	}
	
	}
}

void Account::openAccount()
{
	cout<<"\nEnter Account Number:";
	cin>>ACC[index].accNo;
	cout<<"\nEnter Account holder's Name: ";
	cin>>ACC[index].name;
	cout<<"\nEnter balance to be deposited:";
	cin>>ACC[index].balance;
    index++;
}

void Account::viewAccount()
{
	double userip;
	cout<<"\nEnter Account number:";
    cin>>userip;
    for(int i=0;i<index;i++)
    {
    	if(ACC[i].accNo==userip)
    	{
    		Account::show(i);
    		break;
		}
		else
		cout<<"\nInvalid Account Number......!";
    }
}

void Account::depositAmt()
{
	double userip;
	float depAmt;
	cout<<"\nEnter Account Number";
	cin>>userip;
	for(int i=0;i<index;i++)
	{
		if(ACC[i].accNo==userip)
		{
			ACC[i].balance=ACC[i].balance+depAmt;
			Account::show(i);
		}
	}
}

void Account::withdrawAmt()
{
    double userip;
	float wdAmt;
	cout<<"\nEnter Account Number";
	cin>>userip;
	for(int i=0;i<index;i++)
	{
		if(ACC[i].accNo==userip)
		{
			ACC[i].balance=ACC[i].balance-wdAmt;
			Account::show(i);
		}
	}
}

void Account::viewBalance()
{
	double userip;
	cout<<"\nEnter Account Number";
	cin>>userip;
	for(int i=0;i<index;i++)
	{
		if(ACC[i].accNo==userip)
		{
			cout<<"\nYour Account Balance:"<<ACC[i].balance;
		}
	} 
}

void Account::searchAcc()
{
	double userip;
	cout<<"\nEnter Account Number";
	cin>>userip;
	for(int i=0;i<index;i++)
	{
		if(ACC[i].accNo==userip)
		{
			cout<<"\nAccount Details are found:";
			Account::show(i);
		}
	} 
	
}

void Account::show(int index)
{
    cout<<setprecision(10)<<"\nAccount Number:"<<ACC[index].accNo;
    cout<<"\nAccount holder's Name:"<<ACC[index].name;
    cout<<"\nAccount Balance:Rs."<<ACC[index].balance;
}


