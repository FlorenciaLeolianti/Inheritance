#ifndef SHAPE_H
#define SHAPE_H
#include <cstdio>
#include <iostream>

using namespace std;

class Rectangle:Shape
{
	public: 
		Rectangle(int panjangBaru, int lebarBaru);
		void hitungLuas();
		void hitungKeliling();
	protected;
		int panjang;
		int lebar;
};
#endif
