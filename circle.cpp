#include<iostream>
#include "circle.h"

using namespace std;

Circle::Circle()
{
	jarijari=0;
	jenisShape="Circle";
	hitungLuas();
	hitungKeliling();
}

Circle::Circle(int jarijariBaru)
{
	jarijari=jarijariBaru;
	jenisShape="Circle";
	hitungLuas();
	hitungKeliling();
} 

void Circle::hitungLuas()
{
	luas=PI*jarijari*jarijari;
}

void Circle::hitungKeliling()
{
	keliling=2*PI*jarijari;	
}

void Circle::printDetails()
{
	cout<<jenisShape<<": "<<endl;
	cout<<"   "<<"Jari-jari: "<<jarijari<<endl;
	cout<<"   "<<"Luas: "<<luas<<endl;
	cout<<"   "<<"Keliling: "<<keliling<<endl;
	cout<<endl;
}


