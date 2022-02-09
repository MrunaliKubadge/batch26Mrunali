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
        cin>>choice;
	    
        switch(choice)
    {
        case 1:
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
        
                     cin>>current->bookId;
                    
                     cin>>current->bookName;
                     
                     cin>>current->author;
                     current->next=NULL;
                     
                    n--;
             }
             
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
