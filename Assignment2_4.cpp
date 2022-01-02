/*WAP to input Distance between the Cities in Km and Convert it into Meter,Centimeter,Feet and Inches*/
#include<iostream>
using namespace std;

void distanceInMeter(float km);
void distanceInCentimeter(float km);
void distanceInFeet(float km);
void distanceInInches(float km);
	
int main()
{
	float km;
	cout<<"\nEnter Distance between Pune and Bengalore in kms:";
	cin>>km;
	distanceInMeter(km);
	distanceInCentimeter(km);
	distanceInFeet(km);
	distanceInInches(km);
	return 0;
	
}
void distanceInMeter(float km)
{
	cout<<"\nDistance in Meter: "<<1000*km;
}
void distanceInCentimeter(float km)
{
	cout<<"\nDistance in Centimeter: "<<100*1000*km;
}
void distanceInFeet(float km)
{
	cout<<"\nDistance in feet: "<<3.281*1000*km;	
}
void distanceInInches(float km)
{
	cout<<"\nDistance in feet: "<<39.37*1000*km;
}
