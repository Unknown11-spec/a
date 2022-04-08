#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	while (true)
	{
		char select;
		cout << "Kalkulator" << endl;
		cout << "1.Penjumlahan" << endl;
		cout << "2.Pengurangan" << endl;
		cout << "3.Perkalian" << endl;
		cout << "4.Pembagian" << endl;
		cout << "Pilih salah satu = ";
		cin >> select;

		if (select == '1')
		{
			float a, b;
			cout << endl << "Penjumlahan" << endl;
			cout << "Masukkan angka pertama = ", cin >> a;
			cout << "Masukkan angka kedua = ", cin >> b;
			cout << a << " + " << b << " = " << a + b;
		}

		if (select == '2')
		{
			float a, b;
			cout << endl << "Pengurangan" << endl;
			cout << "Masukkan angka pertama = ", cin >> a;
			cout << "Masukkan angka kedua = ", cin >> b;
			cout << a << " - " << b << " = " << a - b;
		}

		if (select == '3')
		{
			float a, b;
			cout << endl << "Perkalian" << endl;
			cout << "Masukkan angka pertama = ", cin >> a;
			cout << "Masukkan angka kedua = ", cin >> b;
			cout << a << " x " << b << " = " << a * b;
		}

		if (select == '4')
		{
			float a, b;
			cout << endl << "Pembagian" << endl;
			cout << "Masukkan angka pertama = ", cin >> a;
			cout << "Masukkan angka kedua = ", cin >> b;
			cout << a << " / " << b << " = " << a / b;
		}
		
		char random;
		cout << endl << endl << "Ulangi ?" << endl;
		cout << "(y / n)" << endl;
		cout << "Pilihan = ";
		cin >> random;
		cout << endl;

		if (random == 'n')
		{
			cout << "Selesai";
			_getch();
			exit(0);
		}
	}
}