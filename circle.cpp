#include<iostream>
#include "circle.h"

using namespace std;

Circle::Circle()
{
	jarijari=0;
	hitungLuas():
	hitungKeliling();
}

Circle::Circle(int jarijariBaru)
{
	jarijari=jarijariBaru;
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
