#include <iostream>
using namespace std;

int main()
{
	char kode;
	//clrscr(;
	cout << "Masukan Kode Barang[A..C] :";
	cin >> kode;
	
	switch (kode)
	{
		case 'A':
			cout << "Alat Olahraga";
			break;
		case 'B':
			cout << "Alat Elektronik";
			break;
		case 'C':
			cout << "Alat Masak";
			break;
		default:
			cout << "Anda Salah Memasukkan Kode";
			break;
		
	}
	getchar();
}
