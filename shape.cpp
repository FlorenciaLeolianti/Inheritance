#include <iostream>
#include "shape.h"

using namespace std;

float Shape::getLuas(){
	return luas;
}

float Shape::getKeliling(){
	return keliling;
}

bool sortByLuas(Shape *a, Shape *b)
{
	a->hitungLuas();
	b->hitungLuas();
	return a->getLuas()<b->getLuas();
}
bool sortByKeliling(Shape *a, Shape *b)
{
	a->hitungKeliling();
	b->hitungKeliling();
	return a->getKeliling()<b->getKeliling();
	
}

