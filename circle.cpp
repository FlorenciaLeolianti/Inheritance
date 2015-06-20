#include<iostream>
#include "circle.h"

using namespace std;

Circle::Circle()
{
	jarijari=0;
<<<<<<< HEAD
	jenisShape="Circle";
=======
	hitungLuas():
	hitungKeliling();
>>>>>>> origin/master
}

Circle::Circle(int jarijariBaru)
{
	jarijari=jarijariBaru;
<<<<<<< HEAD
	jenisShape="Circle";
=======
	hitungLuas();
	hitungKeliling();
>>>>>>> origin/master
} 

void Circle::hitungLuas()
{
	luas=PI*jarijari*jarijari;
}

void Circle::hitungKeliling()
{
	keliling=2*PI*jarijari;	
}


