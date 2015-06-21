#include<cstdio>
#include<iostream>
#include"rectangle.h"

using namespace std;

Rectangle::Rectangle(){
	panjang=0;
	lebar=0;
	jenisShape="Rectangle";
	hitungLuas();
	hitungKeliling();
}

Rectangle::Rectangle(int panjangBaru, int lebarBaru){
	panjang=panjangBaru;
	lebar=lebarBaru;
	jenisShape="Rectangle";
	hitungLuas();
	hitungKeliling();
}

void Rectangle::hitungLuas(){
	luas=panjang*lebar;
}
void Rectangle::hitungKeliling(){
	keliling=2*(panjang+lebar);
}
