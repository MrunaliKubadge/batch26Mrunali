#include<iostream>
using namespace std;

class Customer
{
	public:
	char custName[20];
	
	Customer *next;
};

Customer *first=NULL;
Customer *fptr,*current;

void insertAtEnd()
{
	current=new Customer;
	if(first==NULL)
		first=fptr=current;
	else
	{
		fptr->next=current;
		fptr=current;
	}
	
	cout<<"\nEnter Customer Name: ";
	cin>>current->custName;
	current->next=NULL;
		
}

void showQueue()
{
	Customer *temp=first;
	if(first==NULL)
		cout<<"\nQueue is Empty";
	else
	{
		cout<<"\n";
		while(1)
		{
			cout<<" <- "<<temp->custName;
			if(temp->next==NULL)
				break;
				
			temp=temp->next;	
		}		
	}	
}

void removeFromFront()
{
	if(first==NULL)
		cout<<"\nQueue is Empty";
	else
	{
		Customer *temp;
		temp=first;
		first=first->next;
		delete temp;
		
	}
}
int main()
{
	int choice;
	
	while(1)
	{

	cout<<"\n 1. Insert";
	cout<<"\n 2. Remove";
	cout<<"\n 3. Show";
	cout<<"\n 4. Exit";
	
	cout<<"\n Enter Choice :";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			insertAtEnd();
			break;
		case 2:
			removeFromFront();
			break;
		case 3:
			showQueue();
			break;
		case 4:
			break;
			
		default:
			cout<<"\n Invalid Choice!";
	}
	}
	return 0;
}
