#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <cstdio>
#include <iostream>
#include "shape.h"
using namespace std;

class Rectangle: public Shape
{
	public: 
		Rectangle();
		Rectangle(int panjangBaru, int lebarBaru);
		void hitungLuas();
		void hitungKeliling();
		void printDetails();
	protected:
		int panjang;
		int lebar;
};
#endif
