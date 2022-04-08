#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string kalimat;
    int jumlah;
    cout << "Masukkan kalimat yang ingin diulangi = ";
    cin >> kalimat;
    cout << "Berapa kali ingin diulangi = ";
    cin >> jumlah;

    for(int c = 1; c <= jumlah; c++)
    {
        cout << c << "." << kalimat << endl;
    }
    _getch();
}
