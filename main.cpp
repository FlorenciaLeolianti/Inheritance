#include <cstdio>
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <vector>

#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"

using namespace std;
string input;
string apalah;
vector <Shape *> shapes;


int main();
void tampil_bentuk();
void tambah_bentuk();
void hapus_bentuk();
void tampil_semua();
void tampil_lingkaran();
void tampil_persegi();
void tampil_persegi_panjang();


//////////////////////////////// M A I N   M E N U ////////////////////////////////////
int main()
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
				cout << "Terima Kasih";
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
		main();
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
				main();
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
				cout << "tambah link";
				break;
			case 2:
				cout << "tambah persgi";
				break;
			case 3:
				cout << "tambah pp";
				break;
			case 4:
				main();
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
				cout << "hapus link";
				break;
			case 2:
				cout << "hapus pers";
				break;
			case 3:
				cout << "hapus pp";
				break;
			case 4:
				main();
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
				cout << "luas semua";
				break;
			case 2:
				cout << "keliling semua";
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
				cout << "luas lingkaran";
				break;
			case 2:
				cout << "keliling lingkaran";
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
				cout << "luas persegi";
				break;
			case 2:
				cout << "keliling persegi";
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
				cout << "luas persegi panjang";
				break;
			case 2:
				cout << "keliling persegi panjang";
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
/*
void tambahKarakter()
{
	string nama;
	string umur;
	string alamat;
	cout << "Masukkan Nama:";
	cin >> nama;
	try
	{
		int i=0;
		char str[100];
		strcpy (str,nama.c_str());
  		while (str[i])
  		{
    		if (isalpha(str[i]))
			i++;
    		else
			{
    			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
				break;
    		}
    	}
	
	cout << endl << "Masukkan Umur:";
	cin >> umur;
		i=0;
		strcpy (str,umur.c_str());
  		while (str[i])
  		{
    		if (isdigit(str[i]))
			i++;
    		else
    		{
    			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
				break;
    		}
    	}
	
	cout << endl << "masukkan Alamat:";
	cin >> alamat;
		i=0;
		strcpy (str,alamat.c_str());
  		while (str[i])
  		{
    		if (isalpha(str[i]))
			i++;
    		else
    		{
    			throw "Maaf, input yang anda masukkan salah. Silakan coba kembali.";
				break;
    		}
    	}
	}
	catch (const char* e)
	{
		cerr << e << "\n\n";
		tambahKarakter();
	}
	cout << endl;

}*/
