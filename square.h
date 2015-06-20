#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"
#include "rectangle.h"
class Square : public Rectangle
{
	public:
		Square();
		Square(int sisi);
		void printDetails();
		int getsisi();
};
#endif
