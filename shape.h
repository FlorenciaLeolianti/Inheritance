#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

using namespace std;

class Shape
{
	public:
		virtual void hitungLuas()=0; //pure virtual function
		virtual void hitungKeliling()=0;
	protected:
		float luas;
		float keliling;
}
#endif
