#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

using namespace std;

const float PI = 3.1415926;
class Circle:Shape
{
	public:
		Circle(int jarijariBaru);
		void hitungLuas();
		void hitungKeliling();
	protected:
		int jarijari;
};
#endif
