#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char keluar;
	string a;
	string b;
	char satu;
	char dua;
	char tiga;
	char empat;
	char lima;
	float hasil_1;
	float hasil_2;
	float hasil_3;
	float hasil_4;
	float hasil_5;

	cout << "Masukkan Nama = ";
	cin >> a;
	cout << endl;
	cout << "Lanjut ke pertanyaan ?" << endl << "(ya / tidak)" << endl << "Jawaban = ";
	cin >> b;

	if (b == "tidak")
	{
		exit(0);
	}
	if (b == "ya")

		cout << endl << "1. Penerjemah program komputer ke dalam binary adalah ?" << endl;
	cout << "a.compiler  b.debugger  c.html" << endl << "Jawaban = ";
	cin >> satu;
	if (satu == 'a')
	{
		hasil_1 = true;
		cout << endl;
	}
	else
	{
		hasil_1 = false;
		cout << endl;
	}

	cout << "2. C++ ditenukan tahun ?" << endl;
	cout << "a.1920  b.1980  c.1970" << endl << "Jawaban = ";
	cin >> dua;
	if (dua == 'c')
	{
		hasil_2 = true;
		cout << endl;
	}
	else
	{
		hasil_2 = false;
		cout << endl;
	}

	cout << "3. Ekstensi file bahasa pemrograman C++ adalah ?" << endl;
	cout << "a.py  b.html  c.cpp" << endl << "Jawaban = ";
	cin >> tiga;
	if (tiga == 'c')
	{
		hasil_3 = true;
		cout << endl;
	}
	else
	{
		hasil_3 = false;
		cout << endl;
	}

	cout << "4. 10 + 12 ?" << endl;
	cout << "a.22  b.10  c.00  d.1" << endl << "Jawaban = ";
	cin >> empat;
	if (empat == 'a')
	{
		hasil_4 = true;
		cout << endl;
	}
	else
	{
		hasil_4 = false;
		cout << endl;
	}

	cout << "5. 1 + 1 ?" << endl;
	cout << "a.12  b.3  c.1  d.2" << endl << "Jawaban = ";
	cin >> lima;
	if (lima == 'd')
	{
		hasil_5 = true;
		cout << endl;
	}
	else
	{
		hasil_5 = false;
		cout << endl;
	}

	int benar = hasil_1 + hasil_2 + hasil_3 + hasil_4 + hasil_5;
	int salah = 5 - benar;
	cout << "Nama = " << a << endl;
	cout << "Benar = " << benar << endl;
	cout << "Salah = " << salah << endl;
	cout << "Nilai = " << 20 * benar << endl << endl;
	_getch();
}
