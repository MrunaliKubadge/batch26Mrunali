#include<iostream>
#include<windows.h>
using namespace std;

class Book
{
    public:
	int bookId;
	char bookName[20];
	char author[20];
	
	Book *next;	
};

int main()
{
int choice,n;
Book *first=NULL;
Book *fptr,*current,*temp;
while(1)
	{
        cout<<"\n1. Add Book";
        cout<<"\n2. Show";
        cout<<"\n3. Delete Book";
        
        cout<<"\nEnter choice:";
        cin>>choice;
        switch(choice)
    {
        case 1:
             cout<<"\nEnter quantity of Books to Add:";
             cin>>n;
                                                                                     
             while(n>0)
             {
                 current= new Book();
                 if(first==NULL)
                 {
                     first=fptr=current;

                 }
                 else 
                 {
                     fptr->next=current;
                     fptr=current;
                 }
                     cout<<"\nEnter Book Id:";
                     cin>>current->bookId;
                     cout<<"\nEnter Book Name:";
                     cin>>current->bookName;
                     cout<<"\nEnter Book Author:";
                     cin>>current->author;
                     current->next=NULL;
                     
                    n--;
             }
             cout<<"\nBooks Added Successfully....!";
        break;
        case 2:
             if(first==NULL)
             {
                 cout<<"\nList is Empty.";
             }
             else
             {
                 temp=first;
                 while(1)
                 {
                     cout<<"\n"<<temp->bookId<<"\t"<<temp->bookName<<"\t"<<temp->author;
                     if(temp->next==NULL)
                      break;
                     temp=temp->next; 
                 }
             }
        break;
        case 3:
        	int user_id;
        	Book *ptr,*delBook;
        	cout<<"\nEnter Book Id to be deleted from List:";
        	cin>>user_id;
        	temp=first;
        	while(1)
        	{
        	    if(user_id==temp->bookId)
        	    {
        		    delBook=temp;
        		    break;
			    }
			    
			    if(temp->next==NULL)
			     break;
			     
				ptr=temp;
				temp=temp->next;  
			}
			
			if(delBook==NULL)
			{
				cout<<"\nBook is not found";
			}
			
			else
			{
				ptr->next=delBook->next;
				delete delBook;
			}
			
        break;
        default:
        cout<<"\nExit";

	}
    }
    return 0;
}
