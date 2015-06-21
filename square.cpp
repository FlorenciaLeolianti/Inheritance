#include "square.h"
Square::Square()
{
	panjang=0;
	jenisShape="square";
	hitungLuas();
	hitungKeliling();
}
Square::Square(int sisi)
{
	panjang=sisi;
	lebar=sisi;
	jenisShape="Square";
	hitungLuas();
	hitungKeliling();
}
