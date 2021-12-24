#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Flight 
{
	private:
		int journeyTime;
		int distance;
	public:
		char flightName[20];
	    int flightId;
	private:
	int validateFlight()	
	{
		if((101<=flightId && flightId<=300) && strncmp(strrev(flightName),"teJ",3)==0 && (2<=journeyTime && journeyTime<=8) && (300<=distance && distance<=1500))
		{
		   return 1;
		}
		else 
		return 0;
	} 
	public:
	void addFlight(int flightId,char flightName[],int journeyTime,int distance)	
	{
		int r=validateFlight();
		if(r=1)
		{
			this->flightId=flightId;
			strcpy(this->flightName,flightName);
			this->journeyTime=journeyTime;
			this->distance=distance;
		}
		else
		{
			this->flightId=0;
			strcpy(this->flightName,NULL);
			this->journeyTime=0;
			this->distance=0;
			
		}
	}
	int getdistance()
	{
		return this->distance;
	}
	int getjourneyTime()
	{
		return this->journeyTime;
	}	
	
	void show()
	{
		cout.setf(ios :: right);
		cout<<setw(5)<<"\n"<<this->flightId
		<<setw(10)<<"\t"<<this->flightName
		<<setw(5)<<"\t"<<this->journeyTime
		<<setw(5)<<"\t"<<this->distance;
	}
		
};

Flight compareFlightbyDistance(Flight m[]);
bool checkduplicates(Flight c1,Flight c2);
Flight orderbyjourneyTime(Flight v[]);

int main()
{
	Flight f[5];
	int i;
	//int a[5],b[5];
	f[0].addFlight(274,"KryptonJet",5,750);
	f[1].addFlight(206,"TrueJet",4,550);
	f[2].addFlight(148,"SpiceJet",8,1400);
	f[3].addFlight(165,"EasyJet",3,400);
	f[4].addFlight(193,"InterJet",7,1200);
	
	for (i=0;i<5;i++)
	{
		f[i].show();
	}
	
	Flight dist=compareFlightbyDistance(f);
	cout<<"\nFirst Flight with distance more than 500km : ";
	dist.show();
	
	bool r=checkduplicates(f[0],f[2]);
	if(r)
	cout<<"\nFlights are Duplicates";
	else
	cout<<"\nFlights are not Duplicates";
	
	Flight First=orderbyjourneyTime(f);
	cout<<"\nFlight with Minimum journey Time: ";
	First.show();
	return 0;
}

Flight compareFlightbyDistance(Flight m[])
{
	int i,pos;
	for (i=0;i<5;i++)
	 {
		if(m[i].getdistance()>500)
			return m[i];
		break;
	 } 	
}
	
bool checkduplicates(Flight c1,Flight c2)
{
    if(c1.flightId=c2.flightId && strcmpi(c1.flightName,c2.flightName)==0 && c1.getdistance()==c2.getdistance()&&c1.getjourneyTime()==c2.getjourneyTime())
	{
	    return true;	
	}
	else return false;	
}

Flight orderbyjourneyTime(Flight v[])
{
	Flight key;
	int i,k;
	for (i=1;i<5;i++)
	{
	   key=v[i];
	   k=i-1;
	   while(k>=0 && v[k].getjourneyTime()>key.getjourneyTime())
	   {
	   	v[k+1]=v[k];
	   	k--;
	   }
		v[k+1]=key;
	}	
	cout<<"\nFlights arrangement in Ascending order of Journey Time:";
	for (i=0;i<5;i++)
	{
		v[i].show();
	}
	return v[0];
}	
