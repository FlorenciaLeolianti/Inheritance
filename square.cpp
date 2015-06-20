#include "square.h"
Square::Square()
{
	panjang=0;
	jenisShape="Square";
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
void Square::printDetails()
{
	cout<<jenisShape<<": "<<endl;
	cout<<"   "<<"Sisi: "<<panjang<<endl;
	cout<<"   "<<"Luas: "<<luas<<endl;
	cout<<"   "<<"Keliling: "<<keliling<<endl;
	cout<<endl;
}

int Square :: getsisi()
{
	return panjang;
}
