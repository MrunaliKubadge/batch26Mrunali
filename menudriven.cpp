#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Book
{
	public:
	int bookId;
	char bookName[20];
	float price;
	void getBook()
	{
		cout<<"\nEnter Book Id: ";
		cin>>this->bookId;
		cout<<"\nEnter Book Name: ";
		cin>>this->bookName;
		cout<<"\nEnter Book Price: ";
		cin>>this->price;
	}
	
	void display()
	{
		cout.setf(ios::right);
		cout<<setw(5)<<"\n"<<this->bookId
		<<setw(30)<<"\t"<<this->bookName
		<<setw(5)<<"\t"<<this->price;
	}
	
	 static void findbyId(Book x[],int id)
	{
		for(int i=0;i<5;i++)
		 {
		 	if(x[i].bookId==id)
		 		x[i].display();
	     } 	  	
	}	
	
};

int main()
{
	Book b[5];
    int i,n,v;
    while(1)
 {  
    cout<<"\n1.Add Book";
    cout<<"\n2.Display Book";
    cout<<"\n3.Search Book";
    cout<<"\n4.Display all Books";
    cout<<"\n5.Exit";
    cout<<"\nEnter choice:";
    cin>>n;
    switch(n)
    {
    	case 1:
    	 	for(int i=0;i<5;i++)
    	 	{
    	 		b[i].getBook();
    	 	}
    	 break;
    	case 2:
		 b[3].display();
		 break;
		case 3:
		 cout<<"Enter Book id to be Searched: ";
		 cin>>v;
	     Book::findbyId(b,v);
		  break;
		case 4:
		 for(i=0;i<5;i++)
		 {
		 	b[i].display();
		 }
		 case 5:
		 exit(0);	
		    	
	}
 }
}
