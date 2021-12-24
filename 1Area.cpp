#include<iostream>
using namespace std;

float circleArea(float r)
{
	return 3.14*r*r;
}

float rectangleArea(float x,float y)
{
	return x*y;
}

float triangleArea(float x,float y)
{
	return 0.5*x*y;
}

float squareArea(float x)
{
	return x*x;
}

int main()
{
	float areaC=circleArea(6.25f);
	float areaR=rectangleArea(45.3f,23.4f);
	float areaT=triangleArea(12.9f,10.25f);
	float areaS=squareArea(25.75f);
	cout<<"\nArea of Circle: "<<areaC;
    cout<<"\nArea of Rectangle: "<<areaR;
	cout<<"\nArea of Triangle: "<<areaT;
	cout<<"\nArea of Square: "<<areaS;	
	
	
}
