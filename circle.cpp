#include<iostream>
#include "circle.h"

using namespace std;

Circle::Circle()
{
	jarijari=0;
	jenisShape="Circle";
}

Circle::Circle(int jarijariBaru)
{
	jarijari=jarijariBaru;
	jenisShape="Circle";
} 

void Circle::hitungLuas()
{
	luas=PI*jarijari*jarijari;
}

void Circle::hitungKeliling()
{
	keliling=2*PI*jarijari;	
}


