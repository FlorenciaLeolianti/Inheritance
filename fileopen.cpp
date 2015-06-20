#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

int main(){
	cout << "isi circle.txt"<< endl;
	ifstream lingkaran("circle.txt");  /// lingkaran
	int radius;
	string line;
	while (lingkaran>>radius)
		{
		
			cout << radius << '\n'; // tes load file
		}
	lingkaran.close();
	
	cout << endl << " isi square.txt" << endl ;
	 
	ifstream persegi("square.txt");  /// persegi
	int sisi;
	while (persegi>>sisi)
		{
		
			cout << sisi << '\n'; // tes load file
		}

	persegi.close();
	
	cout << endl << " isi rectangle.txt" << endl ;
	 
	ifstream persegiPanjang("rectangle.txt");  /// persegi
	int panjang, lebar;
	bool cek=true;
	while (persegiPanjang>>sisi)
		{
			if (cek==true)
			{
				panjang=sisi;
				cek = false;
			}
			else if (cek==false)
			{
				lebar=sisi;
				cek = true;
			}
			cout << panjang << '\t' << lebar << '\n'; // tes load file
		}

	persegiPanjang.close();
	
	return 0;
}
