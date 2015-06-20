#include <iostream>
#include "square.h"
using namespace std;
int main()
{
	Square s(20);
	s.hitungLuas();
	s.hitungKeliling();
	cout<<"Luas: "<<s.getLuas()<<endl<<"Keliling: "<<s.getKeliling()<<endl;
	return 0;
}