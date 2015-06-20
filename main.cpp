#include <cstdio>
#include <iostream>
//#include <windows.h>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <vector>
#include <fstream>

#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"

using namespace std;
string input;
string apalah;
vector <Shape *> shapes;
int i; //All purpose iterator

int main();
void tampil_bentuk();
void tambah_bentuk();
void hapus_bentuk();
void tampil_semua();
void tampil_lingkaran();
void tampil_persegi();
void tampil_persegi_panjang();
void savedata();
void tambah_lingkaran();
void tambah_persegi();
void tambah_persegi_panjang();

void delete_lingkaran();
void delete_persegi();
void delete_persegi_panjang();
void main_menu();



//////////////////////////////// M A I N   M E N U ////////////////////////////////////
int main()
{
	ifstream lingkaran("circle.txt");  /// lingkaran
	int radius;
	string line;
	while (lingkaran>>radius)
		{
			//Circle cir;
			//cir = Circle (radius);
			//cout << radius << '\n'; // tes load file
			shapes.push_back(new Circle(radius));
		}
	lingkaran.close();
	
	//cout << endl << " isi square.txt" << endl ;
	 
	ifstream persegi("square.txt");  /// persegi
	int sisi;
	while (persegi>>sisi)
		{
			//Square s(sisi);
			//cout << sisi << '\n'; // tes load file
			shapes.push_back(new Square(sisi));
		}

	persegi.close();
	
	//cout << endl << " isi rectangle.txt" << endl ;
	 
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
				shapes.push_back(new Rectangle(panjang,lebar));
			}
			
			
			//Rectangle rect;
			//rect = Rectangle(panjang, lebar);
			//cout << panjang << '\t' << lebar << '\n'; // tes load file
		}

	persegiPanjang.close();	
	main_menu();
	
}

void main_menu()
{
	system("CLS");
	fflush stdin;
	cout << "MENU UTAMA"<< endl;
	cout << "1. Tampilkan Bentuk" << endl;
	cout << "2. Tambah Bentuk" << endl;
	cout << "3. Hapus Bentuk" << endl;
	cout << "4. Exit" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	cout << endl;

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0 || input.compare("4") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				tampil_bentuk();
				break;
			case 2:
				tambah_bentuk();
				break;
			case 3:
				hapus_bentuk();
				break;
			case 4:
				savedata();
				cout << "Terima Kasih";
				exit(0);
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl << endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		main_menu();
	}
}

////////////////////////////////  M E N U    T A M P I L     B E N T U K ////////////////////////////////////
void tampil_bentuk()
{
	system("CLS");
	fflush stdin;
	cout << "MENU TAMPIL BENTUK" << endl;
	cout << "1. Tampilkan Semua Bentuk" << endl;
	cout << "2. Tampilkan Lingkaran" << endl;
	cout << "3. Tampilkan Persegi" << endl;
	cout << "4. Tampilkan Persegi Panjang" << endl;
	cout << "5. Kembali ke Menu Utama" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	cout << endl;

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0 || input.compare("4") == 0 || input.compare("5") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				tampil_semua();
				break;
			case 2:
				tampil_lingkaran();
				break;
			case 3:
				tampil_persegi();
				break;
			case 4:
				tampil_persegi_panjang();
				break;
			case 5:
				main_menu();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl << endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		tampil_bentuk();
	}
}


////////////////////////////////  M E N U    T A M B A H     B E N T U K ////////////////////////////////////
void tambah_bentuk()
{
	system("CLS");
	fflush stdin;
	cout << "MENU TAMBAH BENTUK" << endl;
	cout << "1. Tambah Lingkaran" << endl;
	cout << "2. Tambah Persegi" << endl;
	cout << "3. Tambah Persegi Panjang" << endl;
	cout << "4. Kembali ke Menu Utama" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	cout << endl;
	
	
	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0 || input.compare("4") == 0 )
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				tambah_lingkaran();
				break;
			case 2:
				tambah_persegi();
				break;
			case 3:
				tambah_persegi_panjang();
				break;
			case 4:
				main_menu();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl<< endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		tambah_bentuk();
	}
}

////////////////////////////////  M E N U    H A P U S     B E N T U K ////////////////////////////////////
void hapus_bentuk()
{
	system("CLS");
	fflush stdin;
	cout << "MENU HAPUS BENTUK" << endl;
	cout << "1. Hapus Lingkaran" << endl;
	cout << "2. Hapus Persegi" << endl;
	cout << "3. Hapus Persegi Panjang" << endl;
	cout << "4. Kembali ke Menu Utama" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	cout << endl;

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0 || input.compare("4") == 0 )
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				delete_lingkaran();
				hapus_bentuk();
				break;
			case 2:
				delete_persegi();
				hapus_bentuk();
				break;
			case 3:
				delete_persegi_panjang();
				hapus_bentuk();
				break;
			case 4:
				main_menu();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl << endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		hapus_bentuk();
	}
}


////////////////////////////////  MENU TAMPIL SEMUA BENTUK   ////////////////////////////////////
void tampil_semua()
{
	system("CLS");
	fflush stdin;
	cout << "MENU TAMPILKAN SEMUA BENTUK" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin  >> input;
	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				//cout << "luas semua";
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
				for(i=0;i<shapes.size();i++)
				{
					shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_semua();
				break;
			case 2:
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
				for(i=0;i<shapes.size();i++)
				{
					shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_semua();
				break;
			case 3:
				tampil_bentuk();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl << endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		hapus_bentuk();
	}
}


////////////////////////////////  MENU TAMPIL  BENTUK LINGKARAN  ////////////////////////////////////
void tampil_lingkaran()
{
	system("CLS");
	fflush stdin;
	cout << "MENU TAMPILKAN BENTUK LINGKARAN" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	cout << endl;

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
				case 1:
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
				for(i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Circle")
						shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_lingkaran();
				break;
				case 2:
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
				for(i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Circle")
						shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_lingkaran();
				break;
			case 3:
				tampil_bentuk();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl << endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		hapus_bentuk();
	}
}


////////////////////////////////  MENU TAMPIL  BENTUK PERSEGI  ////////////////////////////////////
void tampil_persegi()
{
	system("CLS");
	fflush stdin;
	cout << "MENU TAMPILKAN BENTUK PERSEGI" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	cout << endl;

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
				for(i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Square")
						shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_persegi();
				break;
			case 2:
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
				for(i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Square")
						shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_persegi();
				break;
			case 3:
				tampil_bentuk();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl << endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		hapus_bentuk();
	}
}

////////////////////////////////  MENU TAMPIL  BENTUK PERSEGI PANJANG   ////////////////////////////////////
void tampil_persegi_panjang()
{
	system("CLS");
	fflush stdin;
	cout << "MENU TAMPILKAN BENTUK PERSEGI PANJANG" << endl;
	cout << "1. Urutkan Berdasarkan Luas" << endl;
	cout << "2. Urutkan Berdasarkan Keliling" << endl;
	cout << "3. Kembali ke Menu Tampilkan Bentuk" << endl;
	cout << "Silahkan Masukkan pilihan Anda (1-4): " << endl;
	cin >> input;
	cout << endl;

	try
	{
		if (input.compare("1") == 0 || input.compare("2") == 0 || input.compare("3") == 0)
		{
			int pil = atoi(input.c_str());
			switch (pil)
			{
			case 1:
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByLuas);
				for(i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Rectangle")
						shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_persegi_panjang();
				break;
			case 2:
				sort(shapes.begin(),shapes.begin()+shapes.size(),Shape::sortByKeliling);
				for(i=0;i<shapes.size();i++)
				{
					if(shapes[i]->getJenisShape()=="Rectangle")
						shapes[i]->printDetails();
				}
				cout << "tekan apa saja untuk kembali" << endl;
				cin >> apalah;
				tampil_persegi_panjang();
				break;
			case 3:
				tampil_bentuk();
				break;
			}
		}
		else
		{
			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
		}
	}
	catch (const char* e)
	{
		cerr << e << endl << endl;
		cout << "Tekan Apa Saja Untuk Kembali." << endl;
		cin >> apalah;
		hapus_bentuk();
	}
}

void savedata()
{
	ofstream of;
	of.open("circle.txt");
	of.close();
	of.open("square.txt");
	of.close();
	of.open("rectangle.txt");
	of.close();
	for(i=0;i<shapes.size();i++)
	{
		
		if(shapes[i]->getJenisShape()=="Circle")
		{
			of.open("circle.txt", ofstream::out | ofstream::app);
			of<<((Circle *)shapes[i])->getjarijari()<<endl;
			of.close();
		}
		
		else if(shapes[i]->getJenisShape()=="Square")
		{
			of.open("square.txt", ofstream::out | ofstream::app);
			of<<((Square*)shapes[i])->getsisi()<<endl;
			of.close();
		}
		
		else if(shapes[i]->getJenisShape()=="Rectangle")
		{
			of.open("rectangle.txt", ofstream::out | ofstream::app);
			of<<((Rectangle*)shapes[i])->getpanjang()<<"\t"<<((Rectangle*)shapes[i])->getlebar()<<endl;
			of.close();
		}
	}
}

void tambah_lingkaran(){
	system("CLS");
	fflush stdin;
	try
	{
	float radius;
	cout << "Masukkan Jari-jari:" << endl;
		if(!(cin >> radius && radius>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
		else 
		{
		shapes.push_back(new Circle(radius));
		cout << "data berhasil dimasukkan." << endl << endl << "silahkan tekan apa saja untuk kembali."<<endl;
		cin >> apalah;
		tambah_bentuk();
		}
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		cout << endl;
		tambah_lingkaran();
	}
}

void delete_lingkaran()
{
	fflush stdin;
	try
	{
		int radius;
		cout<<"Masukkan jari-jari yang akan dihapus: "<<endl;
		if(!(cin>>radius))
		{
			cin.clear();
			cin.ignore();
			throw "Maaf, input yang Anda masukkan salah. Silakan coba kembali.";
		}
		bool cek = false;
		for (i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Circle")
			{
				if(((Circle*)shapes[i])->getjarijari() == radius)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
				}
			}
		}
			
		if(!cek)
		{
			cout<<"Tidak ada Circle dengan jari-jari X.";
		}
	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_lingkaran();
	}
}

void tambah_persegi(){
	system("CLS");
	fflush stdin;
	try
	{
	float sisi;
	cout << "Masukkan Sisi:" << endl;
		if(!(cin >> sisi && sisi>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
		else 
		{
		shapes.push_back(new Square(sisi));
		cout << "data berhasil dimasukkan." << endl << endl << "silahkan tekan apa saja untuk kembali."<<endl;
		cin >> apalah;
		tambah_bentuk();
		}
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		cout << endl;
		tambah_persegi();
	}
}

void delete_persegi(){
	fflush stdin;
	try
	{
		int sisi;
		cout<<"Masukkan sisi yang akan dihapus: "<<endl;
		if(!(cin>>sisi))
		{
			cin.clear();
			cin.ignore();
			throw "Maaf, input yang Anda masukkan salah. Silakan coba kembali.";
		}
		bool cek = false;
		for (i=0;i<shapes.size();i++)
		{
			if(shapes[i]->getJenisShape()=="Square")
			{
				if(((Square*)shapes[i])->getsisi() == sisi)
				{
					cek = true;
					shapes.erase(shapes.begin()+i);
				}
			}
		}
			
		if(!cek)
		{
			cout<<"Tidak ada Square dengan sisi X.";
		}
	}
	catch (const char *e)
	{
		cerr << e << "\n\n";
		cout << endl;
		delete_persegi();
	}
}

void tambah_persegi_panjang(){
	system("CLS");
	fflush stdin;
	try
	{
		float panjang, lebar;
		cout << "Masukkan panjang:" << endl;
		if(!(cin >> panjang && panjang>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
		cout << "Masukkan lebar:" << endl;	   	
		if(!(cin >> lebar && lebar>0)) {
            cin.clear();
            cin.ignore();
            throw "Maaf, input yang anda masukkan salah. Silakan coba kembali." ;
		   	}
	
  		shapes.push_back(new Rectangle(panjang,lebar));
		cout << "data berhasil dimasukkan." << endl << endl << "silahkan tekan apa saja untuk kembali."<<endl;
		cin>> apalah;
		tambah_bentuk();
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		cout << endl;
		tambah_persegi_panjang();
	}
	
}

void delete_persegi_panjang(){
	
}
