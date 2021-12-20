#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Laptop
{
	public:
		char companyName[20];
		float warranty;
		int price;
	
	void createGadget(char companyName[],float warranty,int  price)
    {
	    strcpy(this->companyName,companyName);
	    this->warranty=warranty;
	    this->price=price;
    }
    void show()
    {
	    cout<<"\n"<<this->companyName<<"\t"<<this->warranty<<"\t"<<this->price;
    }
};

class smartPhone
{
		public:
		char companyName[20];
		float warranty;
		int  price;
		void createGadget(char companyName[],float warranty,int  price)
          {
	     strcpy(this->companyName,companyName);
	     this->warranty=warranty;
	     this->price=price;
         }
        void show()
        {
	      cout<<"\n"<<this->companyName<<"\t"<<this->warranty<<"\t"<<this->price;
        }
};

void compareGadget (Laptop x,Laptop y);
  void compareGadget (smartPhone x,smartPhone y);

int main()
{
   Laptop L1,L2;
   smartPhone s1,s2;
   L1.createGadget("Lenovo",1,45000);
   L2.createGadget("Dell",2,60000);
   s1.createGadget("Samsung",0.5,39500);
   s2.createGadget("Redmi",0.5,15000);
   
   L1.show();
   L2.show();
   s1.show();
   s2.show();
   compareGadget(L1,L2);
   compareGadget(s1,s2);
}
 void compareGadget (Laptop x,Laptop y)
{
    cout<<"\nDifference between Prices: "<<abs(x.price-y.price);
    cout<<"\nDifference between warranty: "<<abs(x.warranty-y.warranty);
}
 
  void compareGadget (smartPhone x,smartPhone y)
{
    cout<<"\nDifference between Prices: "<<abs(x.price-y.price);
    cout<<"\nDifference between warranty: "<<abs(x.warranty-y.warranty);
}
