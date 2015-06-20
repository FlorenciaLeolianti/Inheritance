#include <cstdio>
#include <iostream>
#include "rectangle.h"

using namespace std;

int main(){
	float panjang, lebar;
	panjang = 10;
	lebar = 20;
	Rectangle rect;
	rect = Rectangle(panjang, lebar);
	rect.hitungLuas();
	rect.hitungKeliling();
	cout << "luasnya =" << rect.getLuas() << endl; 
	cout << "kelilingnya = " << rect.getKeliling() << endl;
	return 0;
}
