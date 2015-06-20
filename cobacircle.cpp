#include <iostream>
#include "circle.h"

using namespace std;

int main ()
{
	float jarijari=10;
	Circle cir;
	cir = Circle (jarijari);
	cir.hitungLuas();
	cir.hitungKeliling();
	cout<<"Luas: "<<cir.getLuas()<<endl;
	cout<<"Keliling: "<<cir.getLuas()<<endl;
}
