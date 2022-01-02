/*WAP to interchange the integer numbers using a function [Reference Arguments]*/
#include<iostream>
using namespace std;

void interchangeNumbers(int &a)
{
	int no;
	no=a%10*10+a/10;
	cout<<"\nNumber After Interchanging digits:"<<no;	
}

int main()
{
	int x;
	cout<<"\nEnter 1st Number x:";
	cin>>x;
	interchangeNumbers(x); 
	return 0; 
}


