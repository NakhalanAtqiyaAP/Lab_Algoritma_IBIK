#include <iostream>

int main()
{
	using namespace std;
	
	string x, y, z;
	
	cout << "Masukkan NPM Anda: ";
	cin >> x;
	cin.ignore();
		
	cout << "Masukkan Nama Anda: ";
	getline(cin, y);
	
	cout << "Masukkan Alamat Anda: ";
	getline(cin, z);
	
	cout << "NPM Anda Adalah: " << x << endl;
	cout << "Nama Anda Adalah: " << y << endl;
	cout << "Alamat Anda Adalah: " << z;
	
	return 0;
}
