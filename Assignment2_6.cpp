#include<iostream>
#include<string.h>
using namespace std;

int eligibilityforInsurance(int a,char y[])
{
	if(a>=35 && strcmpi(y,"male")==0)
	return 1;
	else if(a>=25 && strcmpi(y,"Female")==0)
	return 1;
	else if((a<35 && strcmpi(y,"male")==0) || (a<25 && strcmpi(y,"Female"))==0)
	return 0;
	else 
	return 96;
}

int main()
{
	char empName[20];
	int age;
	char gender[10];
	cout<<"\nEnter Employee Details:";
	cin>>empName>>age>>gender;
	int x=eligibilityforInsurance(age,gender);
	if(x==1)
		cout<<"\n"<<empName<<"\nEmployee is Eligible for Insurance.";
	else if(x==0)
		cout<<"\nEmployee is not eligible or Insurance";
	else 
	    cout<<"\nInvalid Input....!";
}
