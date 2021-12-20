#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Population
{
	public:
	char city[20];
	double totalPopulation;
	
	void getdata(char city[],double totalPopulation) 
	{
		strcpy(this->city,city);
		this->totalPopulation=totalPopulation;
	}
	
    void show()
    {
    	cout.setf(ios :: right);
    	cout<<setw(20)<<"\n"<<this->city
    	<<setw(10)<<"\t"<<this->totalPopulation;
	}
};

Population maxbypopulation(Population x,Population y,Population z)
{
	Population max;
	max=x.totalPopulation>y.totalPopulation && x.totalPopulation>z.totalPopulation?x:y.totalPopulation>z.totalPopulation?y:z;
	return max;
}
   
int main()
{
	Population p1,p2,p3;
	p1.getdata("Bangalore",154835987);
	p2.getdata("Chennai",368945751);
	p3.getdata("Hyedrabad",1546895253);
	
	p1.show();
	p2.show();
	p3.show();
	
	Population m=maxbypopulation(p1,p2,p3);
	cout<<"\nCity with Maximum Population: ";
	m.show();
	return 0;
}
