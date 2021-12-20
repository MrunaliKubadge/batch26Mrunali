#include<iostream>
#include<string.h>
using namespace std;

class Player
{
	public:
	char playerName[20];
	int runs[3];
	int sum;
	
	void createRecord(char playerName[],int runs[])
	{
		strcpy(this->playerName,playerName);
		for(int i=0;i<3;i++)
		{
			this->runs[i]=runs[i];
		}
	}void show()
	{
		cout<<"\n"<<this->playerName;
		for(int i=0;i<3;i++)
		{
			cout<<"\t"<<this->runs[i];
		}
	}
	int totalruns()
	{
		int sum;
		for(int i=0;i<3;i++)
		{
			sum=sum+this->runs[i];
		}
		return sum;
	}
};

Player maxTotalscore(Player x[]);

int main()
{
	int i;
	Player p[5];
	int p0score[3]={78,64,87};
	p[0].createRecord("Virat kohli",p0score);
	
	int p1score[3]={96,64,83};
	p[1].createRecord("Rohit Sharma",p1score);
	
	int p2score[3]={58,43,69};
	p[2].createRecord("Steve Smith",p2score);
	
	int p3score[3]={78,94,87};
	p[3].createRecord("Jos Buttler",p3score);
	
	int p4score[3]={54,48,87};
	p[4].createRecord("Eoin morgan",p4score);
	
	for(i=0;i<5;i++)
	{
		p[i].show();
	}
	
	Player max=maxTotalscore(p);
	cout<<"\nDetails of Player with Maximum Total score:";
	max.show();
	cout<<"\t"<<max.totalruns();
	return 0;
	
}

Player maxTotalscore(Player x[])
{
	int j,k,sum[5],max,pos;
	max=0;
	for(j=0;j<5;j++)
	{
		sum[j]=0;
		for(k=0;k<3;k++)
		{
			sum[j]=sum[j]+x[j].runs[k];
		}
	if(sum[j]>max)
	    {
	    	max=sum[j];
	    	pos=j;
		}	
	}
	return x[pos];
	
}
