#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

using namespace std;

const float PI = 3.1415926;

class Circle : public Shape
{
	public:
		Circle();
		Circle(int jarijariBaru);
		void hitungLuas();
		void hitungKeliling();
	protected:
		int jarijari;
};
#endif
