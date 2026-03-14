#include <iostream>

int main()
{
	using namespace std;
	
	char y[30], z[35], x[40];
	
	cout << "Masukkan NPM Anda: ";
	cin >> x;
	
	cout << "Masukkan Nama Anda: ";
	cin >> y;
	
	cout << "Masukkan Alamat Anda: ";
	cin >> z;
	
	cout << "NPM Anda Adalah: " << x << endl;
	cout << "Nama Anda Adalah: " << y << endl;
	cout << "Alamat Anda Adalah: " << z;
	
	return 0;
}
