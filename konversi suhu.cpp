#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char select;
	cout << "Kalkulator converter" << endl << endl;
	cout << "Pilih salah satu:" << endl;
	cout << "1. celcius to fahrenheit" << endl;
	cout << "2. celcius to kelvin" << endl;
	cout << "3. fahrenheit to celcius" << endl;
	cout << "4. fahrenheit to kelvin" << endl;
	cout << "5. kelvin to celcius" << endl;
	cout << "6. kelvin to fahrenheit" << endl << endl;
	cout << "Pilihan: ";
	cin >> select;

	if (select == '1')
	{
		cout << "celcius to fahrenheit" << endl << endl;
		long double a;
		cout << "Masukkan angka yang akan diubah = ";
		cin >> a;
		cout << "hasil = " << (a * 9 / 5) + 32;
	}

	if (select == '2')
	{
		cout << "celcius to kelvin" << endl << endl;
		long double a;
		cout << "Mauskkan angka yang akan diubah = ";
		cin >> a;
		cout << "hasil = " << a + 273.15;
	}

	if (select == '3')
	{
		cout << "fahrenheit to celcius" << endl << endl;
		long double a;
		cout << "Masukkan angka yang akan diubah = ";
		cin >> a;
		cout << "hasil = " << (a - 32) * 5 / 9;
	}

	if (select == '4')
	{
		cout << "fahrenheit to kelvin" << endl << endl;
		long double a;
		cout << "Masukkan angka yang akan diubah = ";
		cin >> a;
		cout << "hasil = " << (a - 32) * 5 / 9 + 273.15;
	}

	if (select == '5')
	{
		cout << "kelvin to celcius" << endl << endl;
		long double a;
		cout << "Masukkan angka yang akan diubah = ";
		cin >> a;
		cout << "hasil = " << a - 273.15;
	}

	if (select == '6')
	{
		cout << "kelvin to fahrenheit" << endl << endl;
		long double a;
		cout << "Masukkan angka yang akan diubah = ";
		cin >> a;
		cout << "hasil = " << (a - 273.15) * 9 / 5 + 32;
	}

	_getch();
}
