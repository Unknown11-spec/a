#include <string>
#include <fstream>
#include <conio.h>
#include <iostream>
#include <Windows.h>
//#include <bits/stdc++.h>

using namespace std;

void testing()
{
	int a = 1;
	int* b;
	b = &a;

	cout << "a = " << &a << endl;
	cout << "b = " << b;
}

void satu()
{
	for (int a = 65; a <= 90; a++)
	{
		cout << a << " = " << endl << (char) a << "\t"
			<< a + 32 << (char)(a + 32) << endl;
	}
}

void error()
{
	int a;
	cout << (char)a;
}

void create_file()
{
	ofstream nama_file ("halo.apk");
	nama_file << "this is work";
}

void read_file()
{
	string variable;
	ifstream baca_file("");

	while (getline (baca_file, variable))
	{
		cout << variable;
	}
}

int main()
{
	read_file();
}
