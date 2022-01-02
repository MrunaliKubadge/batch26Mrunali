#include<iostream >
#include<string.h>
#include<iomanip>
using namespace std;
class Hardware
{
	public:
	char name[20];
	float price;
};

void showHardware(Hardware x)
	{
		cout.setf(ios::right);
		cout<<setw(15)<<"\n"<<x.name
		<<setw(5)<<"\t"<<x.price;
	}

int main()
{
	Hardware h1,h2;
	h1.price=562.25f;
	strcpy(h1.name,"Registers");
	h2.price=450.00f;
	strcpy(h2.name,"Wires");
	showHardware(h1);
	showHardware(h2);
	return 0;
}
