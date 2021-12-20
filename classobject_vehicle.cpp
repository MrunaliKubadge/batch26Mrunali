#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Vehicle
{
	public:
	int vehicleNo;
	char vehicleName[20];
	float avg;
	int fuelCapacity;
	void getdata(int vehicleNo,char vehicleName[],float avg,int fuelCapacity)
	{
		this->vehicleNo=vehicleNo;
		strcpy(this->vehicleName,vehicleName);
		this->avg=avg;
		this->fuelCapacity=fuelCapacity;
	}
	void show()
	{
		cout.setf(ios :: right);
		cout<<setw(7)<<"\n"<<this->vehicleNo
		<<setw(20)<<"\t"<<this->vehicleName
		<<setw(5)<<"\t"<<this->avg
		<<setw(5)<<"\t"<<this->fuelCapacity;
	}
};

void findbyavg(Vehicle x[3]);

int main()
{
	Vehicle v[3];
	v[0].getdata(1578,"Discovery",10.80f,45);
	v[1].getdata(7849,"Ecosport",23.80f,52);
	v[2].getdata(4563,"Creta",17.60f,48);
	
	for (int i=0;i<3;i++)
	{
		v[i].show();
	}
	cout<<"\nVehicle with average greater than 15kms and fuel capacity more than 10ltrs:";
	findbyavg(v);
    return 0;	
}

void findbyavg(Vehicle x[3])
{
	int i;
	for (i=0;i<3;i++)
	{
		if (x[i].avg>15 && x[i].fuelCapacity>10)
		{
			x[i].show();
		}
	}
}
