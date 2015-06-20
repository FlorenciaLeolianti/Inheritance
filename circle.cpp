#include<iostream>
#include "circle.h"

using namespace std;

Cirlce::Circle()
{
	jarijari=0;
}

Circle::Circle(int jarijariBaru)
{
	jarijari=jarijariBaru;
} 

void Circle::hitungLuas()
{
	luas=PI*jarijari*jarijari;
}

void Circle::hitungKeliling()
{
	keliling=2*PI*jarijari;	
}
